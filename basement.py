def get_negative_sum_index(my_list):
    """
    Given a vector of integers, return the ﬁrst index such that the sum of all integers from the start of the vector to that index (inclusive) is negative.
    """
    current_sum = 0
    for i in range(len(my_list)):
        current_sum += my_list[i]
        if current_sum < 0:
            return i
    return -1