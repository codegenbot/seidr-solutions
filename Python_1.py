```
s = input().strip()
stack = []
group = ""
result = []
for char in s:
    if char == "(" or char == ")":
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            stack.pop()
            group += char
            if not stack:
                result.append(group)
                group = ""
    else:
        group += char
if stack:  
    result.append("(" + "".join(stack) + ")")
print(result)