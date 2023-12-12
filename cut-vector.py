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
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1
    
    return vector[:cut_index], vector[cut_index:]

vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

left_subvector, right_subvector = cut_vector(vector)
print(left_subvector)
print(right_subvector)