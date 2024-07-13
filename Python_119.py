def match_parens(lst):
    result = []
    for s in lst:
        if len(s) == 1: 
            if s in ["(", ")"]:
                result.append("Yes")
            else:
                result.append("No")
        else:
            stack = 0
            match = "Yes"
            for c in s:
                if c == "(":
                    stack += 1
                elif c == ")":
                    if stack <= 0:
                        match = "No"
                        break
                    else:
                        stack -= 1
            if stack > 0: 
                match = "No"  
            result.append(match)
    return result