```
def camel_case(s):
    return "".join(word[0].upper() + word[1:].lower() if word != " " else word for word in s.replace("-", " ").split())