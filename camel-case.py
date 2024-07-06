def camel_case(s):
    if "-" in s:
        return "".join(word.capitalize() for word in s.split("-"))
    else:
        return s.replace(" ", "").capitalize()