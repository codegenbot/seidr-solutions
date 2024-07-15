def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i, word in enumerate(words, 1):
        if i == 1:
            result += word.lower()
        else:
            result += word.capitalize()
    return result[0].lower() + result[1:].capitalize()