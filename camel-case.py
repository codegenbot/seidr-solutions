def camel_case(s):
    return "".join(word.strip("-").capitalize() if word.lstrip("-") != "" else word.lstrip("-").lower() for word in s.replace("-", " ").split())