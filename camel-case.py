def kebab_to_camel_case(string):
    words = string.split("-")
    camel_case = ""
    for i, word in enumerate(words):
        if i == 0:
            camel_case += word
        else:
            camel_case += word.capitalize()
    return camel_case