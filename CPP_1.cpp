def issame(paren_string):
    open = 0
    close = 0
    temp = ""
    for char in paren_string:
        if char == "(":
            open += 1
        elif char == ")":
            close += 1
        if open == close and open > 0:
            yield temp
            temp = ""
            open = 0
            close = 0
        else:
            temp += char
    if temp != "":
        yield temp