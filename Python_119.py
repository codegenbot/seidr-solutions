```
def match_parens(lst):
    for s in lst:
        stack = []
        match = "No"
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if len(stack) == 0:
                    match = "No"
                    break
                else:
                    stack.pop()
        if stack: 
            match = "No"
        print(match)