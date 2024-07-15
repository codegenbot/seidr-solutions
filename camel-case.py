def camel_case(s):
    return "".join(word.capitalize() if i > 0 and s.split("-")[0].isalpha() else word for i, word in enumerate(s.replace("-", " ").split()))