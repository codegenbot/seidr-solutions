def cut_vector(vector):
    n = len(vector)
    min_diff = float('inf')
    split_index = -1
    left_sum = sum(vector[:i+1]) for i in range(n))
    right_sum = sum(vector[i:]) for i in range(n-1, -1, -1))
    diff_list = [(j-i) abs(left_sum-j-right_sum) for j,i in zip(right_sum, left_sum)]
    min_diff_index = diff_list.index(min(diff_list))
    return [vector[:min_diff_index+1], vector[min_diff_index:]]