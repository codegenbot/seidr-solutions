def camel_case(s):
    return "".join(word.capitalize() for word in s.split(" ")) if " " in s else s


while True:
    user_input = input()
    print(camel_case(user_input))