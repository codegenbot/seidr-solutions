def separate_paren_groups():
    paren_string = input()
    return paren_string.replace(" ", "").split(")(")