def camel_case(s):
    words = s.split('-')
    return ''.join(w.capitalize() if i > 0 else w.lower() for i, w in enumerate(words))