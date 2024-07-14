```
def camel_case():
    s = input().split()
    return ''.join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(s))

print(camel_case())