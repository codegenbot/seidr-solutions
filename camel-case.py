def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word.capitalize() if i == 0 or (s.index("-") != -1 and s.index("-") == i) else word[0].upper() + word[1:].lower() for i, word in enumerate(words))