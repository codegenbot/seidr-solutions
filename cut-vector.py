def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(n):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        diff = abs(left_sum - right_sum)
        
        if diff == 0 or (diff < min_diff):
            min_diff = diff
            cut_index = i + 1
    
    return vector[:cut_index], vector[cut_index:]

input_string = input()
vector = list(map(int, input_string.split()))

left, right = cut_vector(vector)
print("\n".join(map(str, left)))
print("\n".join(map(str, right)))