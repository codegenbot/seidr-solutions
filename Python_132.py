```
def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append('[')
        elif char == ']':
            if len(stack) == 0:
                return False
            if stack[-1] != '[':
                return False
            stack.pop()
    return len(stack) == 0

if __name__ == '__main__':
    string = input("Enter a string: ")
    print(is_nested(string))