def camel_case(s):
    return "".join(word.capitalize() if i > 0 else word[0].upper() + word[1:] for i, word in enumerate(s.replace("-", " ").split()))