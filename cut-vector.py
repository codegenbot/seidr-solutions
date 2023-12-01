import numpy as np
def cut_vector(vector):
    vector = np.array(vector)
    min_diff = np.inf
    cut_index = -1
    
    for i in range(1, len(vector)):
        sum_left = np.sum(vector[:i])
        sum_right = np.sum(vector[i:])
        diff = abs(sum_left - sum_right)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return list(vector[:cut_index]), list(vector[cut_index:])

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except ValueError:
        break

# Call the function and print the output
output1, output2 = cut_vector(vector)
for num in output1:
    print(num)
for num in output2:
    print(num)