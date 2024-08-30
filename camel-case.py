def camel_case(input_str):
    result = ""
    for word in input_str.split():
        if not result:
            result += word.capitalize()
        else:
            result += word[0].upper() + word[1:]
    return result