def is_nested(string):
    stack = []
    for i in string:
        if i == '[':
            stack.append(i)
        elif i == ']':
            if len(stack) == 0:
                return False
            stack.pop()
    return len(stack) == 0

print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
