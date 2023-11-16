from math import log10

def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.

    Example:

        Input: arr = [111,21,3,4000,5,6,7,8,9], k = 4

    # create a new array to store all elements with at most two digits
    # create a counter to store the sum of the elements

    # loop through the first k elements in arr
        # if the element has at most two digits
            # append the element to the new array
            # add the element to the counter

    # return the counter
        Output: 24 # sum of 21 + 3

    Constraints:
        1. 1 <= len(arr) <= 100
        2. 1 <= k <= len(arr)
    """
