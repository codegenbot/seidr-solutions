```
def camel_case(s):
    words = s.split("-")
    return "".join(word.capitalize() if i > 0 else word for i in range(len(words)))