def kebab_to_camel(string):
    words = string.split("-")
    camel_case = words[0]
    for i in range(1, len(words)):
        camel_case += words[i].capitalize()
    return camel_case