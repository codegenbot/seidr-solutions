def camel_case(input_str):
    words = input_str.split("-")
    result = words[0].lower()
    for word in words[1:]:
        result += word.capitalize()
    return result