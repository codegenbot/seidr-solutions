def camel_case(input_string):
    words = input_string.split("-")
    result = words[0].lower()
    for i, word in enumerate(words[1:]):
        if i == 0:
            result += word.title()
        else:
            result += word.capitalize()
    return result