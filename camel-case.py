def camel_case(s):
    result = ""
    for i, words in enumerate(map(str.split, s.replace("-", " ").split()), 1):
        if i == 1:
            result += ''.join(word.capitalize() for word in words)
        else:
            result += ''.join(word.capitalize())