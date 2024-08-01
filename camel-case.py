def camel_case(input_string):
    result = ""
    for word in input_string.split():
        if not result or "-" in word:
            result += word.lstrip("-").capitalize()
        else:
            result += word.capitalize()
    return result