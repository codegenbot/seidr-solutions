import numpy as np

def cut_vector(vector):
    vector = np.array(vector)
    n = len(vector)
    min_diff = float('inf')
    cut_point = -1

    for i in range(1, n):
        left_sum = np.sum(vector[:i])
        right_sum = np.sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_point = i

    return list(vector[:cut_point]), list(vector[cut_point:])

# Reading input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Calling the function and printing the result
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)