def camel_case(s):
    return "".join(word.capitalize() if i > 0 or (i == len(s.split()) - 1 and not s[i-1].isalpha()) else word for i, word in enumerate(s.replace("-", " ").split()))