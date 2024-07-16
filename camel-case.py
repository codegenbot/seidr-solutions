```
def camel_case(s):
    result = ""
    words = s.split("-")
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
    return result


input_string = input()
print(camel_case(input_string))