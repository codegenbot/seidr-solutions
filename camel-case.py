def camel_case(s):
    result = s.split()[0].replace('-', '').lower().capitalize()
    for w in s.split()[1:]:
        if w:
            result += w.replace('-', '').lower().capitalize()
        else:
            result += w
    return result