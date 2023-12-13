def kebab_to_camel_case(string):
    words = string.split("-")
    for i in range(len(words)):
        if i != 0:
            words[i] = words[i].capitalize()
    return "".join(words)

string = input()
print(kebab_to_camel_case(string))