```
def camel_case(s):
    result = s.split()[0].replace('-', '').lower().capitalize()
    for w in s.split()[1:]:
        if w:
            result += ''.join(word.capitalize() or word.lower() for word in w.replace('-', ' ').split()).upper()
    return result