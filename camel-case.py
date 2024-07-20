```
def camel_case(s):
    result = s.split()[0].replace('-', '').capitalize()
    for word in s.split()[1:]:
        result += word.replace('-', '').lower().capitalize()
    return result