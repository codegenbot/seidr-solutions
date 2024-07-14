def camel_case(s):
    if ' ' in s:
        return ''.join(word.capitalize() for word in s.split()[0].replace('-', '+').split('+') + s.split()[1:])
    else:
        return s.replace('-', '').capitalize().replace(' ', '') + s[s.index(' ') + 1:].capitalize()