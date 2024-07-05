```
def camel_case(s):
    return "".join(word if not word or word[0].isalpha() else word.capitalize() for word in s.replace("-", " ").split())