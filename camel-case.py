def camel_case(s):
    result = s.split()[0].replace('-', '').lower().capitalize()
    for w in s.split()[1:]:
        if w:
            result += ''.join(word.capitalize() for word in w.replace('-', ' ').split()) 
    return result[0].upper() + result[1:]