```
paren_string = input("Enter the string: ")
stack = []
group = ""
result = []
for char in paren_string:
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
    result.append(group)
print(result)