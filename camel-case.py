```
def camel_case(s):
    return ' '.join(word.capitalize() for word in s.split()).replace(' ', ''.join(word.capitalize().capitalize() if i > 0 else word.capitalize() for i, word in enumerate(s.split())))

print(camel_case(input()))