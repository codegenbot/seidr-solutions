def camel_case():
    s = input().replace('-', ' ').split()
    return ''.join(word.capitalize() for word in s)