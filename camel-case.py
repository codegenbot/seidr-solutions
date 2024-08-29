def camel_case(s):
    return "".join(word.capitalize() for word in s.split()) if " " in s else s


s = input()
print(camel_case(s))