
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
    # Write your code here
    if string.count('[') == string.count(']') and string.count('[') == 0 and string.count(']') == 0 and string.count('[') == 1 and string.count(']') == 1 and string.count('[') == 2 and string.count(']') == 2 and string.count('[') == 3 and string.count(']') == 3 and string.count('[') == 4 and string.count(']') == 4 and string.count('[') == 5 and string.count(']') == 5 and string.count('[') == 6 and string.count(']') == 6 and string.count('[') == 7 and string.count(']') == 7 and string.count('[') == 8 and string.count(']') == 8 and string.count('[') == 9 and string.count(']') == 9 and string.count('[') == 10 and string.count(']') == 10 and
        return False
    else:
        return True
    is_nested('[[]][[') ➞ True
    '''
