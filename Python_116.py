
from collections import Counter


def sort_array(arr):
    """
    In this Kata, you have to sort an array of non-negative integers according to
    number of ones in their binary representation in ascending order.
    For similar number of ones, sort based on decimal value.

    It must be implemented like this:
    >>> sort_array([1, 5, 2, 3, 4]) == [1, 2, 3, 4, 5]
    >>> sort_array([-2, -3, -4, -5, -6]) == [-6, -5, -4, -3, -2]

    # Generate a list of tuples containing the number and its binary representation
    tuples = []
    for num in arr:
        if num >= 0:
            binary_str = bin(num)[2:]
            ones = Counter(binary_str)['1']
            tuples.append((num, ones))
        else:
            tuples.append((num, -1))

    # Sort the tuples by the number of ones
    tuples.sort(key=lambda x: x[1])

    # Return the sorted list
    return [i[0] for i in tuples]
    >>> sort_array([1, 0, 2, 3, 4]) [0, 1, 2, 3, 4]
    """
