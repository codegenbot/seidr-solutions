def camel_case(s):
    return "".join(word.capitalize() for word in s.split("-")) if " " not in s else s


while True:
    try:
        user_input = input()
        print(camel_case(user_input))
    except EOFError:
        break