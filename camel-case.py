def camel_case(s):
    words = s.replace("-", " ").split()
    return "".join(word[0].upper() + word[1:].lower() for word in words)