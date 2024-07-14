```
def camel_case(s):
    words = s.split('-')
    result = ''
    for word in words:
        if len(words) == 1:
            result += word.capitalize()
        else:
            result += word.capitalize()
            if i < len(words) - 1:
                result += ' '
    return result

print(camel_case(input()))