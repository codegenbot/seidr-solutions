def camel_case():
    s = input()
    if '-' in s:
        return ''.join(word.capitalize() for word in s.replace('-', ' ').split())
    else:
        return s