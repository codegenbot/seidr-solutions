def match_parens(lst):
    for s in lst:
        if set(s).issubset('()' + ' '):
            count = 0
            has_opening = False
            for char in s:
                if char == "(":
                    count += 1
                    has_opening = True
                elif char == ")":
                    if not has_opening:
                        return "No"
                    count -= 1
                    if count == 0:
                        has_opening = False
            if count > 0:
                return "No"
        else:
            return "No"
    return "Yes"