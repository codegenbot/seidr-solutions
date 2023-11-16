
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

    # Initialize a counter
    count = 0

    # Loop through the string
    for char in string:

        # If the character is an opening bracket, increment the counter
        if char == '[':
            count += 1

        # Else if the character is a closing bracket, decrement the counter
        elif char == ']':
            count -= 1

        # If the counter is less than 0, return False
        if count < 0:
            return False

    # If the counter is 0, return False
    if count == 0:
        return False

    # Else, return True
    return True

print(is_nested('[[]]'))
print(is_nested('[]]]]]]][[[[[]'))
print(is_nested('[][]'))
print(is_nested('[]'))
print(is_nested('[[][]]'))
print(is_nested('[[]][['))
    is_nested('[[]][[') ➞ True
    '''
