```
def cut_vector(vector):
    """Given a vector of positive integers, find the spot where,
    if you cut the vector, the numbers on both sides are either equal,
    or the difference is as small as possible. Return the two resulting subvectors.
    """
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            split_index = i
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index+1], vector[split_index:]