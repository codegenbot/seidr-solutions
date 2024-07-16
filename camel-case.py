def camel_case(input_string):
    words = input_string.split("-")
    result = words[0].capitalize()
    for word in words[1:]:
        result += word[0].upper() + word[1:].lower()
    return result