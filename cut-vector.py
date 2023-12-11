import numpy as np

def cut_vector(vector):
    diff = float("inf")
    index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        current_diff = abs(left_sum - right_sum)
        if current_diff < diff:
            diff = current_diff
            index = i

    subvector1 = vector[:index]
    subvector2 = vector[index:]

    return subvector1, subvector2

input_vector = []
while True:
    try:
        num = int(input())
        input_vector.append(num)
    except:
        break

output1, output2 = cut_vector(input_vector)
for num in output1:
    print(num)

for num in output2:
    print(num)