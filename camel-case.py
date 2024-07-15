def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words, 1):
        if i == 1:
            result += word.lower()
        else:
            result += word[0].upper() + word[1:].lower()
    return result