def camel_case(input_str):
    words = input_str.replace("-", " ").split()
    result = words[0].title()
    for word in words[1:]:
        result += word.capitalize()
    return result