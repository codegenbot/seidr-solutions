def camel_case(input_string):
    result = ""
    for word in input_string.split():
        if "-" in word:
            result += word.capitalize()
        else:
            result += word
        result += " "
    return result.strip()


input_string = input()
print(camel_case(input_string))