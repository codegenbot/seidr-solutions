def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i, word in enumerate(words, 1):
        if i == 1:
            result += word.lower()
        else:
            result += word.capitalize()
            if i < len(words):
                result += ' '
    return result