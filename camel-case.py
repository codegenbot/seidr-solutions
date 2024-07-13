def camel_case(s):
    s = s.replace("-", " ")
    return ''.join(word.capitalize() if i > 0 else word.lower() for i, word in enumerate(s.split())).lstrip()
print(camel_case(input()))