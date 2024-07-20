def camel_case(s):
    result = s.split()[0].replace('-', '').capitalize()
    for w in s.split()[1:]:
        if w:
            result += w[1:].lower().replace('-', '') + w[0].upper()
    return result