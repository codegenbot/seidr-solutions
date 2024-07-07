```
def cut_vector(vector):
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
    
    if cut_index != -1:
        return vector[:cut_index+1], vector[cut_index+1:]

print(cut_vector([1]))  
print(cut_vector([1, 10]))  
print(cut_vector([1, 100]))  
print(cut_vector([1, 1000]))  
print(cut_vector([1, 10000]))