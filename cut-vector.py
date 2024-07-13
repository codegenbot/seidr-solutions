Here's the Python solution:

def cut_vector(vector):
    if len(vector) <= 1:
        return [vector], []
    
    left = right = sum(vector)
    min_diff = float('inf')
    split_index = -1
    
    for i in range(1, len(vector)):
        current_sum = sum(vector[:i])
        diff = abs(current_sum - (right - current_sum))
        
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    left_vector = vector[:split_index]
    right_vector = vector[split_index:]
    
    return [left_vector], [right_vector]