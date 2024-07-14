def camel_case(s):
    return " ".join(word.capitalize() for word in s.split()) if len(s) == 10 else s