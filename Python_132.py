
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


def is_nested(string):
    stack = []
    for i in string:
        if i == '[':
            stack.append(i)
        elif i == ']' and len(stack) > 0:
            stack.pop()
        else:
            return False
    return True


print(is_nested('[[]]'))
    is_nested('[[]][[') ➞ True
    '''
