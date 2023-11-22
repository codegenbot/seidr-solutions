def match_parens(lst):
    opening_count = 0

    for char in lst:
        if char == "(":
            opening_count += 1
        elif char == ")":
            opening_count -= 1
            if opening_count < 0:
                return "No"

    if opening_count == 0:
        return "Yes"
    else:
        return "No"