```
def match_parens(lst):
    result = []
    for s in lst:
        count = 0
        for char in s:
            if char == '(':
                count += 1
            elif char == ')':
                if count == 0:
                    break
                count -= 1
        result.append("Yes" if count == 0 else "No")
    return result