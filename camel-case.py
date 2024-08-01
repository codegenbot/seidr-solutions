```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split('-')) + ' '.join(input().split())

print(camel_case(input()))