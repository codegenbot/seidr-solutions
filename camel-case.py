def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    result = ''
    for word in words:
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word
    return result