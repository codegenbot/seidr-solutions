def kebab_to_camel(s):
    return "".join(word.capitalize() for word in s.split("-"))


while True:
    try:
        s = input()
        print(kebab_to_camel(s))
    except EOFError:
        break