def camel_case(s):
    return "".join(word[0].upper() + word[1:].lower() if i > 0 else word for i, word in enumerate(s.split()) if " " not in s or i == len(s.split()) - 1)