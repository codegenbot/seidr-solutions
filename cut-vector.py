def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum

        if left_sum == right_sum:
            return vector[:i], vector[i:], i
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    if total_sum % 2 != 0: 
        return vector, [], len(vector)
    else:
        left_sum = sum(vector[:len(vector)//2])
        right_sum = total_sum - left_sum
        if left_sum == right_sum:
            return vector[:len(vector)//2], vector[len(vector)//2:], len(vector)//2
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = len(vector)//2
    return vector[:split_index], vector[split_index:], split_index