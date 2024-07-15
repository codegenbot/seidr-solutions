def match_parens(lst):
    for s in lst:
        count = 0
        for char in s:
            if char == '(':
                count += 1
            elif char == ')':
                if count == 0:
                    return "No"
                else:
                    count -= 1
        if count > 0:
            return "No"
    return "Yes"