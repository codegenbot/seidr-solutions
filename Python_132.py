
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

    # First, we need to check if the string is empty.
    if not string:
        return False

    # Then, we need to check if the string contains only square brackets.
    if not all(char in '[]' for char in string):
        return False

    # Next, we need to check if the string contains a valid subsequence of brackets.
    # If the string contains a valid subsequence of brackets, then the string is valid.
    # Otherwise, the string is invalid.
    # A valid subsequence of brackets is a subsequence of brackets that is valid.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequence of brackets is valid if and only if it is empty or it is of the form
    # [x] where x is a valid subsequence of brackets.
    # A subsequ
    is_nested('[[]][[') ➞ True
    '''
