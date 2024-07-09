```
def camel_case(s):
    words = s.replace('-', ' ').split()
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(words))

print(camel_case(input()))