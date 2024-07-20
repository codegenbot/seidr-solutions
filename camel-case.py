```
def camel_case(s):
    return ''.join(word if i == 0 else word.capitalize() for i, word in enumerate(s.replace('-', ' ').split()))

print(camel_case('' + input() + ''))