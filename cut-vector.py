import numpy as np

def cut_vector(vector):
    n = len(vector)
    min_diff = float('inf')
    split = 0
  
    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split = i
      
    return vector[:split], vector[split:]

# Read input
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)