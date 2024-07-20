def camel_case(s):
    result = s.split()[0].replace('-', '').lower().capitalize()
    for w in s.split()[1:]:
        if w:
            result += ''.join(word.capitalize() for word in w.replace('-', ' ').split()) + w[0].upper()
    return result