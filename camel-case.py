```
def camel_case(s):
    return "".join(word[1:].capitalize() if word.startswith("-") and len(word) > 1 else (word[0].upper() + word[1:].lower()) for word in s.replace("-", " ").split())