def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]

    min_diff = float("inf")
    cut_index = -1

    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = prefix_sum[n] - prefix_sum[i]
        diff = abs(left_sum - right_sum)
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
left, right = cut_vector(vector)
for num in left:
    print(num)
for num in right:
    print(num)