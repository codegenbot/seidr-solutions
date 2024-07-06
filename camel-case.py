def camel_case(s):
    words = s.replace("-", " ").split()
    result = words[0]
    for i in range(1, len(words)):
        result += word.capitalize() if i > 1 else word
    return result