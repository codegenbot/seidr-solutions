import numpy as np


def cut_vector(vector):
    sum_of_vector = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if (
            current_sum == sum_of_vector - current_sum
            or current_sum == sum_of_vector - current_sum + num
        ):
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input from user
input_vector = []
while True:
    try:
        num = int(input())
        input_vector.append(num)
    except:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(input_vector)
print(*left_subvector)
print(*right_subvector)