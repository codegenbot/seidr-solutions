def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]

    total_sum = prefix_sum[n]
    min_diff = float("inf")
    cut_idx = -1

    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_idx = i

    return vector[:cut_idx], vector[cut_idx:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)