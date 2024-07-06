def camel_case(s):
    return ''.join(word.capitalize() for word in s.replace('-', ' ').split()[0] + ' '.join(word.title() for word in s.split()[1:]))