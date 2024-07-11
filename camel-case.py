```
def camel_case(s):
    return "".join(word.capitalize() if i else word for i,word in enumerate(s.replace("-", " ").split()) if i)