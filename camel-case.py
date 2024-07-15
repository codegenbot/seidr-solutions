def camel_case(s):
    words = s.replace("-", " ").split()
    return ''.join(word.lower() if i == 1 else word.capitalize() for i, word in enumerate(words, start=1))