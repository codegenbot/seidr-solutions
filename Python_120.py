
def maximum(arr, k):
    """
    Given an array arr of integers and a positive integer k, return a sorted list 
    of length k with the maximum k numbers in arr.

    Example 1:

        Input: arr = [-3, -4, 5], k = 3
        Output: [-4, -3, 5]

    Example 2:

        Input: arr = [4, -4, 4], k = 2
        Output: [4, 4]

    Example 3:

        Input: arr = [-3, 2, 1, 2, -1, -2, 1], k = 1
        Output: [2]

    Note:
        1. The length of the array will be in the range of [1, 1000].
        2. The elements in the array will be in the range of [-1000, 1000].
        3. 0 <= k <= len(arr)
    """

    # TODO: Complete the following code given the task description and function signature.
    # Hint: Use the built-in function sorted() to sort the list.
    # Hint: Use the built-in function reversed() to reverse the list.
    # Hint: Use the built-in function slice() to slice the list.
    # Hint: Use the built-in function len() to get the length of the list.
    # Hint: Use the built-in function max() to get the maximum value in the list.
    # Hint: Use the built-in function min() to get the minimum value in the list.
    # Hint: Use the built-in function abs() to get the absolute value of a number.
    # Hint: Use the built-in function sum() to get the sum of the list.
    # Hint: Use the built-in function enumerate() to get the index and value of the list.
    # Hint: Use the built-in function zip() to combine two lists.
    # Hint: Use the built-in function map() to map a function to a list.
    # Hint: Use the built-in function filter() to filter a list.
    # Hint: Use the built-in function reduce() to reduce a list.
    # Hint: Use the built-in function all() to check if all elements in the list are True.
    # Hint: Use the built-in function any() to check if any element in the list is True.
    # Hint: Use the built-in function set() to convert a list to a set.
    # Hint: Use the built-in function list() to convert a set to a list.
    # Hint: Use the built-in function tuple() to convert a list to a tuple.
    # Hint: Use the built-in function dict() to convert a list to a dictionary.
    # Hint: Use the built-in function str() to convert a list to a string.
    # Hint: Use the built-in function int() to convert a list to an integer.
    # Hint: Use the built-in function float() to convert a list to a float.
    # Hint: Use the built-in function complex() to convert a list to a complex number.
    # Hint: Use the built-in function ord() to convert a character to an integer.
    # Hint: Use the built-in function chr() to convert an integer to a character.
    # Hint: Use the built-in function bin() to convert an integer to a binary string.
    # Hint: Use the built-in function oct() to convert an integer to an octal string.
    # Hint: Use the built-in function hex() to convert an integer to a hexadecimal string.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
    # Hint: Use the built-in function divmod() to get the quotient and remainder of a division.
    # Hint: Use the built-in function pow() to calculate the power of a number.
    # Hint: Use the built-in function round() to round a number.
