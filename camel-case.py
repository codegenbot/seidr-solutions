```
def camel_case(s):
    words = s.split("-")
    return words[0] + "".join(word.capitalize() for word in words[1:])