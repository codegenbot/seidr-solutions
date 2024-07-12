def camel_case():
    s = input().replace('-', ' ').split()
    result = s[0].lower()  
    return ''.join(word.capitalize() if i > 0 else word for i, word in enumerate(s))