def camel_case(s):
    s = s.replace("-", " ").replace(" ", "").capitalize()
    return "".join(word.lower() if i > 0 else word for i, word in enumerate(s.split()))