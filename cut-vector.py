Here's the solution:

def cut_vector(input_list):
    n = len(input_list)
    min_diff = float('inf')
    split_index = -1
    
    for i in range(n-1):
        diff = abs(sum(input_list[:i+1]) - sum(input_list[i:]))
        
        if diff <= min_diff:
            min_diff = diff
            split_index = i
            
    return input_list[:split_index], input_list[split_index:]