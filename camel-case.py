def kebab_to_camel(s):
    s = s.replace("-", " ").replace(" ", "")
    return "".join(x.title() for x in s)


while True:
    try:
        user_input = input()
        print(kebab_to_camel(user_input))
    except (EOFError, KeyboardInterrupt):
        break