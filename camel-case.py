```
def camel_case(s):
    words = s.replace('-', ' ').replace('+', ' ').split()
    result = words[0].lower()
    for word in words[1:]:
        result += word.capitalize()
    return result