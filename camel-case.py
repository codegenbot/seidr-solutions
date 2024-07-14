def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    result = ''
    for word in words:
        if not result:
            result = word.lower()
        else:
            result += word.capitalize()
    return result