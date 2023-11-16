import re
def is_nested(string: str) -> bool:
    
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    '''
    if string[0] == ']' or string[-1] == '[': return False
    return any(char == '[' for char in string)



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
