def camel_case(s):
    result = s.split()[0].replace('-', '').capitalize()
    for w in s.split()[1:]:
        if w:
            result += ''.join(word[0].upper() + word[1:].lower() if word else '' for word in w.replace('-', ' ').split()).upper()
    return result