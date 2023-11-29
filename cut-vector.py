def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum == total_sum - current_sum:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Get the resulting subvectors
subvector1, subvector2 = cut_vector(vector)

# Print the subvectors
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)