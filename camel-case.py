def camel_case(s):
    return "".join(word.capitalize() for word in s.split("-")) if "-" in s else s


while True:
    try:
        s = input()
        print(camel_case(s))
    except EOFError:
        break