# Read input
input_list = []
for _ in range(2):
    input_list.append(int(input()))

# Find the spot to cut the vector
total_sum = sum(input_list)
half_sum = total_sum // 2
subvector1_sum = 0
index = 0
for i, num in enumerate(input_list):
    subvector1_sum += num
    if subvector1_sum >= half_sum:
        index = i
        break

# Print output
print(*input_list[: index + 1])
print(*input_list[index + 1 :])