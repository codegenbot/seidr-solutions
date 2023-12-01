def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    prefix_sum = 0
    min_diff = float("inf")
    cut_idx = -1

    for i in range(n):
        prefix_sum += vector[i]
        suffix_sum = total_sum - prefix_sum
        diff = abs(prefix_sum - suffix_sum)

        if diff < min_diff:
            min_diff = diff
            cut_idx = i

    return vector[: cut_idx + 1], vector[cut_idx + 1 :]


# Read input from user
vector = []
while True:
    try:
        line = input()
        vector.append(int(line))
    except EOFError:
        break

# Call the function and print the output
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)