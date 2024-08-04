```
def camel_case(s):
    return ''.join(word.capitalize() for word in s.split('-') if word)

print(camel_case(input()))