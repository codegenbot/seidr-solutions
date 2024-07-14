def camel_case(input_str):
    words = input_str.replace('-', ' ').split()
    camel_case_str = ''
    for word in words:
        if not camel_case_str:
            camel_case_str += word.capitalize()
        else:
            camel_case_str += word.capitalize().swapcase()
    return camel_case_str