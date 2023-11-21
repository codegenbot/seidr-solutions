def kebab_to_camel_case(string):
    words = string.split("-")
    camel_case_words = [words[0]]
    for word in words[1:]:
        camel_case_words.append(word.capitalize())
    return "".join(camel_case_words)

input_string = input()
print(kebab_to_camel_case(input_string))