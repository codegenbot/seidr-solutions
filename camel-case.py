def kebab_to_camel(s):
    return "".join(word.capitalize() for word in s.split("-"))


while True:
    try:
        user_input = input()
        print(kebab_to_camel(user_input))
    except EOFError:
        break