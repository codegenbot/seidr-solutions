import math

def cut_vector(vector):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if math.isclose(left_sum, right_sum):
            return vector[:i], vector[i:]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index != -1:
        return vector[:cut_index], vector[cut_index:]
    else:
        return [], []