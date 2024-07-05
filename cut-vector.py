```python
def cut_vector(vector):
    """Given a vector of positive integers, find the spot where, if you cut the vector, 
    the numbers on both sides are either equal, or the difference is as small as possible. 
    Return the two resulting subvectors as two outputs."""
    total_sum = sum(vector)
    left_sum = 0

    min_diff = float('inf')
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

        left_sum += vector[i]

    return str(vector[:split_index]), str(vector[split_index:])