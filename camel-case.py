```
def camel_case(s):
    result = ""
    for i, word in enumerate(map(str.split, s.replace("-", " ").split()), 1):
        if i == 1:
            result += word[0].upper() + word[1:].lower()
        else:
            result += word.capitalize()[0] + word[1:].lower()
    return result