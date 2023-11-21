def kebab_to_camel_case(string):
    words = string.split(" ")
    camel_case = ""
    for word in words:
        if "-" in word:
            word_parts = word.split("-")
            camel_case += word_parts[0] + "".join([part.capitalize() for part in word_parts[1:]])
        else:
            camel_case += word
        camel_case += " "
    return camel_case.strip()