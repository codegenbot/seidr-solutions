import numpy as np

def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    min_diff = total_sum
    index = 0
    
    for i in range(len(vector)):
        current_sum += vector[i]
        diff = abs(total_sum - 2*current_sum)
        
        if diff < min_diff:
            min_diff = diff
            index = i + 1
    
    return vector[:index], vector[index:]

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the output
output1, output2 = cut_vector(vector)
for num in output1:
    print(num)
for num in output2:
    print(num)