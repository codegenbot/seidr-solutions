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
    dict_ = {'[':']'}
    stack = []
    # loop through string
    for char in string:
        # if char is in dict_
        if char in dict_:
            # append char to stack
            stack.append(char)
        # else if char is not in dict_
        elif char not in dict_:
            # if stack is not empty
            if stack:
                # pop the last item from stack
                stack.pop()
            # else if stack is empty
            else:
                # return False
                return False
    # return False if stack is empty
    if len(stack) == 0:
        return False
    # else if last item in stack is in dict_
    elif stack[-1] in dict_:
        # return True
        return True

print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
    is_nested('[[]][[') ➞ True
    '''
