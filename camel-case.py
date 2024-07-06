def camel_case(s):
    return s.split()[0] + ''.join(word.capitalized() if i > 0 else word for i, word in enumerate(s.replace('-', ' ').split(), 1))