def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(map(lambda x: x.title(), words), start=1):
        if i == 1:
            result += word
        else:
            result += word[0].upper() + word[1:]
    return result