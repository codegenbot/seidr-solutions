def camel_case(s):
    return ''.join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(' '.join(part.strip('-').lower() for part in s.split('-')).split()))