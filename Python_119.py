```
def match_parens(lst):
    for s in lst:
        match = "Yes"
        stack = []
        if len(s) == 1:
            if s[0] != "(" and s[0] != ")":
                print("No")
            else:
                print("No")
        else:
            for c in s:
                if c == "(":
                    stack.append(c)
                elif c == ")":
                    if not stack or stack.pop() != "(":
                        match = "No"
                        break
            else:
                if stack:
                    match = "No"
        print(match)