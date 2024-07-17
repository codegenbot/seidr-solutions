def camel_case(input_str):
    result = ""
    for word in input_str.split():
        if result:
            result += "".join(word.capitalize())
        else:
            result = word.lower()
    return result