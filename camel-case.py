def camel_case(s):
    s = s.strip().replace('-', '')
    return ''.join(word.capitalize() if i > 0 and s.split('-')[i-1] != '' else word.lower() for i, word in enumerate(s))