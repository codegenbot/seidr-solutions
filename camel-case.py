def camel_case(s):
    s = s.replace("-", " ")
    words = s.split()
    return "".join(word.capitalize() for i, word in enumerate(words) if i > 0) + words[0].capitalize()