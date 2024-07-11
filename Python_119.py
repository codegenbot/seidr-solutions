```
def match_parens(lst):
    stack = []
    result = "Yes"
    for s in lst:
        o_count = c_count = 0
        for c in s:
            if c == "(":
                o_count += 1
                stack.append(c)
            elif c == ")":
                c_count += 1
                if len(stack) == 0:
                    result = "No"
                    break
                stack.pop()
        if len(stack) != 0 or o_count != c_count:
            result = "No"
    return result