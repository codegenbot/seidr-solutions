def match_parens(lst):
    result = []
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
                    result.append("No")
                    break
        if has_opening and count > 0: 
            result.append("No")
        elif not has_opening or count == 0:
            result.append("Yes")
        else:
            result.append("No")
    return result

print(match_parens(["()", "(())", ")(", "((()))"]))