def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result

s = input()
print(camel_case(s))