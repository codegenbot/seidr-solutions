
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested("[[]]") ➞ True
    is_nested("[]]]]]]][[[[[]") ➞ False
    is_nested("[][]") ➞ False
    is_nested("[]") ➞ False
    is_nested("[[][]]") ➞ True
    # Initialize the counter for the number of open brackets.
    open_brackets = 0

    # Initialize a boolean to track whether there is a nested bracket.
    nested = False

    # Loop through the string.
    for char in string:

        # If the character is an open bracket, add 1 to the counter.
        if char == '[':
            open_brackets += 1

        # Else if the character is a closed bracket, subtract 1 from the counter.
        elif char == ']':
            open_brackets -= 1

        # If the counter is less than 0, the brackets are not nested.
        if open_brackets < 0:
            return False

        # If the counter is greater than 0, there is a nested bracket.
        elif open_brackets > 0:
            nested = True

    # If the counter is 0 and there is a nested bracket, return True.
    if open_brackets == 0 and nested == True:
        return True

    # Otherwise, return False.
    else:
        return False


string = '[[]]'
print(is_nested(string))
    is_nested("[[]][[") ➞ True   
    '''
