def cut_vector(vector):
    min_diff = sum(vector) + 1
    left_index = right_index = 0

    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        diff = abs((sum(vector) - current_sum) - current_sum)
        
        if diff < min_diff or ((sum(vector) - current_sum) == current_sum and diff == min_diff):
            min_diff = diff
            left_index = i
            right_index = i + 1

    return vector[:left_index+1], vector[right_index:]