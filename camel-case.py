def kebab_to_camel_case(string):
    words = string.replace("-", " ").split()
    for i in range(1, len(words)):
        words[i] = words[i].capitalize()
    return "".join(words)