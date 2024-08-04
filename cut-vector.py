Here is the solution:

def cut_vector(vector):
    n = len(vector)
    left_sum = 0
    min_diff = float('inf')
    cut_index = -1

    for i in range(n-1):
        left_sum += vector[i]
        right_sum = sum(vector[i+1:])
        diff = abs(left_sum - right_sum)

        if diff <= min_diff:
            min_diff = diff
            cut_index = i

    return vector[:cut_index+1], vector[cut_index+1:]