def kebab_to_camel(s):
    return "".join(word.capitalize() for word in s.split("-") if word)


while True:
    try:
        user_input = input("input: ")
        print(f"output: {kebab_to_camel(user_input)}")
    except (KeyboardInterrupt, EOFError):
        break