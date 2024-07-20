def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0].lower()
    for i, word in enumerate(words[1:], start=1):
        result += word.capitalize() if i > 1 else word
    return result