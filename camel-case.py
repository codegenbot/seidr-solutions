def camel_case(input_str):
    result = input_str.title().replace("-", "")
    if " " in input_str:
        return f"{result}{' '.join(x.capitalize() for x in input_str.split(' ')[1:])}"
    else:
        return result