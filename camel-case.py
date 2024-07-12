```Python
def camel_case():
    s = input().replace('-', ' ').split()
    result = ''
    for word in s:
        if len(result) > 0:
            result += word.capitalize()
        else:
            result += word.lower()
    return result