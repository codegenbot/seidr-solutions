elif char in {')': ')', ']': '[', '}': '{'}[char]:
    if stack: 
        top = stack.pop()
        groups[-1] += char
        if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}[top]:
            result.append(groups.pop().lstrip().rstrip())
    else:
        while stack and (stack[-1] in ['(', '[']) and {')': ')', ']': '[', '}': '{'}[char] != {'(': ')', '[': ']', '{': '}'}[stack[-1]]:
            if {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}['({'.index(stack.pop())]:
                pass
        if not stack and {')': ')', ']': '[', '}': '{'}[char] == {')': ')', ']': '[', '}': '{'}['({'.index(top)]:
            result.append(groups.pop().lstrip().rstrip())