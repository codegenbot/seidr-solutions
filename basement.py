def get_negative_sum_index(arr):
    """
    Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
    :param arr: The input array
    :return: The index of the first negative sum, or -1 if no such index exists
    """
    # Initialize variables
    n = len(arr)
    curr_sum = 0
    i = 0

    # Iterate through the array
    while i < n and curr_sum >= 0:
        curr_sum += arr[i]
        i += 1

    # If no negative sum was found, return -1
    if curr_sum >= 0:
        return -1

    # Otherwise, return the index of the first negative sum
    return i - 1