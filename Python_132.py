
def is_nested(string: str) -> bool:
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True
    try:
        if string[0] == ']' or string[-1] == '[':
            return False
        else:
            for char in string:
                if char == '[':
                    return True
    except IndexError:
        return False


print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
print(is_nested('[[]][['))
    '''
