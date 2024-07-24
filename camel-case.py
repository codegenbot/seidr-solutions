def camel_case(s):
    return ''.join(word.capitalize() for word in s.split()) if '-' not in s else ' '.join([''.join(word.capitalize() for word in group.split('-')) for group in s.split(' ')])