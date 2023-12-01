def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        remaining_sum = total_sum - current_sum
        if current_sum == remaining_sum or abs(current_sum - remaining_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Solve the problem
subvector1, subvector2 = cut_vector(vector)

# Print the outputs
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)