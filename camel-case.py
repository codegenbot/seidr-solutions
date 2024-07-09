def camel_case(s):
    words = s.split("-")
    return words[0].upper() + "".join(word.capitalize() for word in words[1:]).replace(' ', '')