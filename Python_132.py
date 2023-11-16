
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

    # Create a stack to hold the brackets
    stack = []
    # Iterate through the string
    for bracket in string:
        # If the bracket is an opening bracket
        if bracket == '[':
            # Append it to the stack
            stack.append(bracket)
        # If the bracket is a closing bracket
        elif bracket == ']':
            # If the stack is empty
            if len(stack) == 0:
                # Return false
                return False
            # Pop the last bracket from the stack
            stack.pop()
    # If stack is empty
    if len(stack) == 0:
        # Return True
        return True
    # Else return False
    return False


print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
print(is_nested('[[]][['))
    '''
