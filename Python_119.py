```
def match_parens(lst):
    stack = []
    for s in lst:
        while "(" in s and ")" in s:
            if s.count("(") == s.count(")"):
                while "(" in s:
                    stack.append("(")
                    s = s.replace("(", "", 1)
                while ")" in s:
                    if not stack:
                        return "No"
                    s = s.replace(")", "", 1, 1)
                    stack.pop()
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"