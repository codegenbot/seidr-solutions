def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    suffix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
    for i in range(n - 1, -1, -1):
        suffix_sum[i] = suffix_sum[i + 1] + vector[i]
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, n):
        diff = abs(prefix_sum[i] - suffix_sum[i])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return vector[:cut_index], vector[cut_index:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

# Call the function and print the results
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)