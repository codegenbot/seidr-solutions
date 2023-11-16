
'''
Create a function that takes a string as input which contains only square brackets.
The function should return True if and only if there is a valid subsequence of brackets 
where at least one bracket in the subsequence is nested.

is_nested('[[]]') ➞ True
is_nested('[]]]]]]][[[[[]') ➞ False
is_nested('[][]') ➞ False
is_nested('[]') ➞ False
is_nested('[[][]]') ➞ True
is_nested('[[]][[') ➞ True
'''
def is_nested(string):
    if string.count('[') == 1 and string.count(']') == 1:
        return True
    else:
        return False


if __name__ == '__main__':
    print(is_nested('[[]]'))
    print(is_nested('[]]]]]]][[[[[]'))
    print(is_nested('[][]'))
    print(is_nested('[]'))
    print(is_nested('[[][]]'))
    print(is_nested('[[]][['))
