
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True
    # Create a stack to store the brackets
    stack = []
    # Iterate through the string
    for bracket in string:
        # If the bracket is an opening bracket, append it to the stack
        if bracket == '[':
            stack.append(bracket)
        # If the bracket is a closing bracket, pop the last bracket from the stack
        elif bracket == ']':
            stack.pop()
    # If the stack is empty, return True
    if len(stack) == 0:
        return True
    # Otherwise, return False
    else:
        return False

print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
    is_nested('[[]][[') ➞ True
    '''
