def kebab_to_camel(s):
    words = s.split("-")
    for i in range(1, len(words)):
        words[i] = words[i].capitalize()
    return "".join(words)

s = input()
print(kebab_to_camel(s))