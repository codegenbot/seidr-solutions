```
def camel_case(s):
    s = s.replace("-", " ").split()
    result = ""
    for word in s:
        if not result:
            result = word
        else:
            result += word.capitalize()
    return result