def match_parens(lst):
    result = []
    for s in lst:
        count = 0
        has_opening = '(' in s
        for char in s:
            if char == '(':
                count += 1
            elif char == ')':
                if count > 0:
                    count -= 1
                else:
                    break
        result.append("Yes" if (count == 0 and has_opening) else "No")
    return result