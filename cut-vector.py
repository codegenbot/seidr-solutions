```
def cut_vector(input_list):
    n = len(input_list)
    left_sum = 0
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(n):
        if input_list[i] == 0:
            break
        left_sum += input_list[i]
        
        right_sum = sum(input_list[i+1:])
        diff = abs(left_sum - right_sum)
        
        if diff <= min_diff:
            min_diff = diff
            cut_index = i
    
    if cut_index == -1:
        return [input_list], []
    
    left_half = input_list[:cut_index + 1]
    right_half = input_list[cut_index + 1:]
    
    return left_half, right_half