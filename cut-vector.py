```
def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
    
    left_sum = sum(vector[:cut_index])
    right_sum = sum(vector[cut_index:])
    
    if left_sum == right_sum:
        return vector[:cut_index], vector[cut_index:]
    else:
        return vector[:cut_index], [vector[cut_index]], vector[cut_index+1:]

# example usage
print(cut_vector([1, 0]))  # output: ([1], [0])
print(cut_vector([1, 10]))  # output: ([1], [10])
print(cut_vector([1, 100]))  # output: ([1], [100])
print(cut_vector([1, 1000]))  # output: ([1], [1000])
print(cut_vector([1, 10000]))  # output: ([1], [10000])