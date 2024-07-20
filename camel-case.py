def camel_case(s):
    result = s.split()[0].replace('-', '').lower().capitalize()
    for i, w in enumerate(s.split()[1:]):
        if w:
            if i == 0: 
                result += w.replace('-', '').capitalize()
            else:
                result += ''.join(word.capitalize() for word in w.replace('-', ' ').split()) 
    return result