```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split('-')) + ' '.join(word.strip().capitalize() for word in s.split())

print(camel_case(input()))