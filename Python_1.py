```
for char in paren_string:
    if char == " ":
        continue
    if char in ["(", "[", "{"]:
        stack.append(char)
        groups.append("")
    elif char in {")": ")", "]": "[", "}": "{"}[char]:
        if stack:
            top = stack.pop()
            groups[-1] += char
            if (
                not stack
                and {")": ")", "]": "[", "}": "{"}[char]
                == {")": ")", "]": "[", "}": "{"}[top]
            ):
                result.append(groups.pop().lstrip().rstrip())
        elif char in {")", "}":
            while stack and (stack[-1] in ["(", "["]):
                stack.pop()
            if not stack or char == "}":
                result.append(groups.pop().lstrip().rstrip())