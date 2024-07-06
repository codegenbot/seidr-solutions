```
def camel_case(s):
    result = ""
    words = s.replace("-", " ").split()
    for word in words:
        result += word.capitalize() if len(result) == 0 else word.capitalize().replace(word[0], word[0].upper())
    return result