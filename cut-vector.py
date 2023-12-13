def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_difference = abs(total_sum)
    split_index = -1
    for i in range(len(vector) - 1):
        current_sum += vector[i]
        difference = abs(current_sum - (total_sum - current_sum))
        if difference < min_difference:
            min_difference = difference
            split_index = i + 1
    return vector[:split_index], vector[split_index:]