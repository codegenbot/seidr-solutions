def cut_vector(vector):
    sorted_vector = sorted(vector)
    
    if len(sorted_vector) % 2 == 1:
        mid_index = len(sorted_vector) // 2
        return (sorted_vector[:mid_index], sorted_vector[mid_index:])
    else:
        min_diff = float('inf')
        for i in range(len(sorted_vector)):
            left_sum = sum(sorted_vector[:i+1])
            right_sum = sum(sorted_vector[i:])
            if abs(left_sum - right_sum) < min_diff or not min_diff:
                min_diff = abs(left_sum - right_sum)
                split_index = i

        return (sorted_vector[:split_index], sorted_vector[split_index:])