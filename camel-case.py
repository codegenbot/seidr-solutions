def camel_case(input_str):
    words = input_str.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result