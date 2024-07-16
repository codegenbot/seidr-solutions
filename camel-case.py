def camel_case(input_string):
    words = input_string.split("-")
    output = words[0].capitalize()
    for word in words[1:]:
        output += word.capitalize()
    return output