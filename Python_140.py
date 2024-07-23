def fix_spaces(s):
    return s.replace("\n", " ")


def check(input_string):
    sentence = input_string.split(". ")
    for i in range(len(sentence)):
        sentence[i] = fix_spaces(sentence[i].strip())
    return ".".join(sentence)


input_string = input("Enter a sentence: ")
print(check(input_string))