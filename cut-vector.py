def cut_vector(vector):
    vector_sum = sum(vector)
    current_sum = 0
    smallest_diff = float('inf')
    split_index = -1

    for i, num in enumerate(vector):
        current_sum += num
        diff = abs(vector_sum / 2 - current_sum)
        if diff < smallest_diff:
            smallest_diff = diff
            split_index = i

    return vector[:split_index+1], vector[split_index+1:]

print(cut_vector(input().split(',')))