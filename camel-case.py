def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0].lower()
    for i, word in enumerate(words[1:], 1):
        result += word.capitalize()
    return result