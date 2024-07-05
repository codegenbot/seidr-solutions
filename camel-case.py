```
def camel_case(s):
    return "".join(word[0].upper() + word[1:].lower() if i > 0 or not word.startswith("-") else word[1:].capitalize() for i, word in enumerate(s.replace("-", " ").split()))