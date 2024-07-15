```
def camel_case(s):
    result = ""
    for i, word in enumerate(map(str.split, s.replace("-", " ").split()), 1):
        if i > 1:
            result += word[0].capitalize()
        else:
            result += word[0].lower()
    return result.capitalize() + ''.join([i.capitalize() for i in word[1:]]) if len(word) > 1 else result