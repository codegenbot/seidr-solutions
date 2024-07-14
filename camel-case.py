```
def camel_case(s):
    words = s.split('-')
    result = ''
    for word in words:
        if not result:
            result = word
        else:
            result += word.capitalize()
    print(result)