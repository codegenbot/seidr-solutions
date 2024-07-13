def camel_case(s):
    words = s.split('-')
    result = ''
    for word in words:
        if not result and not word or not any(c.isupper() or c.isdigit() for c in word):
            result += word.capitalize()
        else:
            result += word.capitalize()
    return result

print(camel_case(input()))