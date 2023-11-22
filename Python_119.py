def match_parens(lst):
    counter = 0
    for char in lst:
        if char == "(":
            counter += 1
        elif char == ")":
            counter -= 1
            if counter < 0:
                return "No"
    if counter == 0:
        return "Yes"
    else:
        return "No"