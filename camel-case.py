```
def camel_case(s):
    words = map(str.split, s.replace("-", " ").split())
    return ''.join(word[0].lower() + word[1:].capitalize()[0] + word[1:].capitalize()[1:] if i > 1 else word[0].lower() for i, word in enumerate(words, start=1))