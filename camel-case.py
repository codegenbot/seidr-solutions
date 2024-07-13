def camel_case(s):
    return "".join(word.capitalize() if i > 0 and s.replace("-", " ").split()[i-1].endswith("-") else word.lower() for i, word in enumerate((s.replace("-", " ") + " ").split()))