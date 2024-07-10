def cut_vector(vector):
    if len(vector) <= 1:
        return [str([vector])], []
    
    min_diff = float("inf")
    split_indices = []

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return [str(vector[:i])], [str(vector[i:])]
        
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_indices = [i]

        elif abs(left_sum - right_sum) == min_diff:
            split_indices.append(i)

    if not split_indices or len(split_indices) > 1:
        return [str(vector[:split_indices[0]]), str(vector[split_indices[-1]:])], []
    else:
        return [str(vector[:split_indices[0]]), str(vector[split_indices[0]+1:])], [str(vector[split_indices[0]:])]