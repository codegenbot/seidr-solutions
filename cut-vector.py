def cut_vector(vector):
    sorted_vector = sorted(vector)
    min_diff = float("inf")
    min_index = 0

    for i in range(len(sorted_vector)):
        if i == len(sorted_vector) - 1:
            break
        diff = abs(sorted_vector[i] - sorted_vector[-i-1])
        if diff < min_diff:
            min_diff = diff
            min_index = i

    return (
        sorted_vector[:min_index+1],
        sorted_vector[min_index+1:],
    )