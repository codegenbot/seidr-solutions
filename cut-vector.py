import numpy as np

def cut_vector(vector):
    n = len(vector)
    total_sum = np.sum(vector)
    left_sum = 0
    right_sum = total_sum
    
    min_diff = float('inf')
    cut_index = -1
    
    for i in range(n-1):
        left_sum += vector[i]
        right_sum -= vector[i]
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return vector[:cut_index+1], vector[cut_index+1:]

# Read input from user
vector = []
while True:
    try:
        line = input()
        if line == "":
            break
        vector.append(int(line))
    except EOFError:
        break

# Call the function and print the results
left_subvector, right_subvector = cut_vector(vector)
print("\n".join(str(x) for x in left_subvector))
print("\n".join(str(x) for x in right_subvector))