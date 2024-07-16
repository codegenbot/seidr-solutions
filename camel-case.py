def camel_case(input_string):
    words = input_string.split("-")
    result = words[0].lower()
    for word in words[1:]:
        result += word.lstrip('-').capitalize()
    return result