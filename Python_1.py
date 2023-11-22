def separate_paren_groups():
    paren_string = input()
    return re.split("\)\(", paren_string.replace(" ", ""))