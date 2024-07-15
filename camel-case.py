def camel_case(s):
    result = ""
    for i, words in enumerate(map(str.split, s.replace("-", " ").split()), 1):
        if i > 1:
            result += words[0].upper() + words[1:].lower()
        else:
            result += "".join(word.capitalize() for word in words)
    return result