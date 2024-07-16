def camel_case(input_string):
    words = input_string.split("-")
    result = words[0].capitalize()
    for i, word in enumerate(words[1:], start=1):
        result += word.capitalize()
    return result