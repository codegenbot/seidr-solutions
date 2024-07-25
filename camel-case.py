def camel_case(input_string):
    result = ""
    for word in input_string.split():
        if result:
            result += word.capitalize()
        else:
            result += word
    return result