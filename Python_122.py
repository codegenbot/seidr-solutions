
def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.

    Example:

        Input: arr = [111,21,3,4000,5,6,7,8,9], k = 4

    # Use a variable to store the sum of the elements with at most two digits
    # from the first k elements of arr.

    # Iterate over the first k elements of arr.

        # If the current element of arr is less than or equal to 99,
        # add it to the sum variable.

    # Return the sum variable.
        Output: 24 # sum of 21 + 3

    Constraints:
        1. 1 <= len(arr) <= 100
        2. 1 <= k <= len(arr)
    """
