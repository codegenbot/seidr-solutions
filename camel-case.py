def kebab_to_camel_case(string):
    words = string.split(" ")
    camel_case = ""
    for word in words:
        camel_case += word.capitalize()
    return camel_case