```
def camel_case(s):
    result = ''
    for word in s.split('-'):
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word
    print(camel_case(input()))