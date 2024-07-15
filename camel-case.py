def camel_case(s): 
    return "".join((word.capitalize() if i > 0 else word.replace "-", "")) for i, word in enumerate(s.replace("-", " ").split()))