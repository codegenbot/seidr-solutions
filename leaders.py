def leaders(vector):
    result = []
    stack = []
    for i in vector:
        if not stack or i >= stack[-1]:
            stack.append(i)
        else:
            while stack and stack[-1] > i:
                result.append(stack.pop())
    return result