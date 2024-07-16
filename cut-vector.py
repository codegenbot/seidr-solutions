```
def cut_vector(vector):
    sorted_vector = sorted(vector)
    total_sum = sum(sorted_vector)

    left_sum = 0
    for i, num in enumerate(sorted_vector):
        if left_sum + num >= total_sum / 2:
            break
        left_sum += num

    return sorted_vector[:i+1], sorted_vector[i+1:]