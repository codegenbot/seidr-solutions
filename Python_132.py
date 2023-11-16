import re
def is_nested(string: str) -> bool:
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False

    '''
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True
    if string[0] == ']' or string[-1] == '[':
    else:
        for char in string:
            if char == '[':
                return True
    return False
        return False



def check(function):
    assert function("[[]]") == True
    assert function("[]]]]]]][[[[[]") == False
    assert function("[][]") == False
    assert function("[]") == False
    assert function("[[][]]") == True
    assert function("[[]][[") == True
    assert function("[[]][[") == True
    assert function("]]]]]]]]") == False


if __name__ == '__main__':
    check(is_nested)
