def camel_case(input_str):
    words = input_str.split()
    result = ""
    for word in words:
        if result:
            result += word.capitalize()
        else:
            result += word
    return result