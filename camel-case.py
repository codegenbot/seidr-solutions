```
def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() for word in words[1:]) + words[0].lower()