```
for s in lst:
    stack = 1 if s[0] == "(" else 0
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
    result.append(match)
return result