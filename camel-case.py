def camel_case(input_str):
    result = ''
    for group in input_str.split('-'):
        if result:
            result += group.capitalize()
        else:
            result += group
    return result