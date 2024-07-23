def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    result = ""
    for i, word in enumerate(words):
        if i == 0:
            result += word.capitalize()
        else:
            result += word[1:].lower().capitalize() + word[0].upper()
    return result