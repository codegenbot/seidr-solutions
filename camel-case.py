def camel_case(input_str):
    result = ""
    for word in input_str.replace("-", " ").split():
        if not result:
            result += word.lower()
        else:
            result += word.capitalize()
    return result