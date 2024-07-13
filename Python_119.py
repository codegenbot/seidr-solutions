def match_parens(lst):
    for s in lst:
        count = 0
        has_opening = False
        for char in s:
            if char == "(":
                count += 1
                has_opening = True
            elif char == ")":
                if count > 0:
                    count -= 1
                else:
                    return "No"
    return "Yes"