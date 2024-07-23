```
def camel_case(s):
    s = s.replace("-", " ").replace(" ", "").capitalize()
    return "".join(word.capitalize() for word in s.split())```