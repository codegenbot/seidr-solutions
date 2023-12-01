def cut_vector(vector):
    prefix_sum = [0] * (len(vector) + 1)
    for i in range(1, len(vector) + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]

    total_sum = prefix_sum[-1]
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]


# Read input from user
vector = []
while True:
    try:
        number = int(input())
        vector.append(number)
    except EOFError:
        break

# Call the function and print the subvectors
left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector, sep="\n")
print(*right_subvector, sep="\n")