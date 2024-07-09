```
def camel_case(s):
    result = s[0].upper()
    for word in s[1:].split("-"):
        if word:
            result += word.capitalize()
    return result