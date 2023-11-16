
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
    # start with a count of 0
    count = 0
    # iterate over each character in the string
    for char in string:
        # if the character is an opening bracket, add 1 to the count
        if char == '[':
            count += 1
        # if the character is a closing bracket, subtract 1 from the count
        if char == ']':
            count -= 1
        # if the count is ever less than 0, return False
        if count < 0:
            return False
    # if the count is never less than 0, return True
    return True

print(is_nested('[[]][['))
    is_nested('[[]][[') ➞ True
    '''
