def camel_case(input_str):
    result = ""
    words = input_str.replace("-", " ").split()
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result