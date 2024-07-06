paren_string = input("Enter the string: ")
stack = []
group = ""
result = []
for char in paren_string:
    if char == "(":
        stack.append(char)
        group += char
    elif char == ")":
        stack.pop()
        group += char
        if not stack:
            result.append(group)
            group = ""
print(result)