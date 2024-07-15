def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for i, word in enumerate(words, 1):
        if i == 1:
            result += word[0].upper() + word[1:].lower()
        else:
            result += word.capitalize()
    return result