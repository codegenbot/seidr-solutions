def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words, start=1):
        if i == 1:
            result += word.lower()
        else:
            result += word.capitalize()
    return result