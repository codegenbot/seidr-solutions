```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.replace('-', ' ').split())

print(camel_case(input()))