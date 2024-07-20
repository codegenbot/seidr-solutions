def camel_case(s):
    words = s.replace("-", " ").split()
    return ''.join(word.lower() if i == 0 else word[0].upper() + word[1:] for i, word in enumerate(words))