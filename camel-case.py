```
def camel_case(s):
    s = s.replace("-", " ")
    result = ' '.join(word.capitalize() for word in s.split())