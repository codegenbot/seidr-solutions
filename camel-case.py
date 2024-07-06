```
def camel_case(s):
    words = s.split('-')
    result = ''
    for word in words:
        if result:
            result += word.capitalize()
        else:
            result = word.lower()
    print(result)