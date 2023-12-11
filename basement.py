def get_negative_sum_index(nums):
    """
    Given a vector of integers, return the first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
    For example,
    input:
    1
    -1
    output:
    0
    input:
    1
    -100
    output:
    0
    input:
    2
    -1 100
    output:
    0
    input:
    2
    -95 100
    output:
    0
    input:
    2
    -30 5
    output:
    0
    """
    for i in range(len(nums)):
        if sum(nums[:i+1]) < 0:
            return i