```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split('-')) if '-' in s else s[0].upper() + s[1:].replace('-', ' ').title()

print(camel_case(input()))