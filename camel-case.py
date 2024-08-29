```
def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s.replace('-', ' ').split()))


while True:
    s = input()
    print(camel_case(s))