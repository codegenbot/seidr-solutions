Here is the solution:

def cut_vector(input_vector):
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(input_vector)):
        diff = abs(sum(input_vector[:i]) - sum(input_vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return input_vector[:split_index], input_vector[split_index:]