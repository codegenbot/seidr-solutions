def kebab_to_camel(kebab_str):
    return (
        "".join(word.capitalize() for word in kebab_str.split("-"))
        if "-" in kebab_str
        else kebab_str
    )


while True:
    user_input = input()
    print(kebab_to_camel(user_input))