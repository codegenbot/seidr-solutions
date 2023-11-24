def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)

    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + vector[i]

    total_sum = prefix_sum[n]
    min_diff = float("inf")
    index = -1

    for i in range(1, n):
        diff = abs(total_sum - 2 * prefix_sum[i])
        if diff < min_diff:
            min_diff = diff
            index = i

    subvector1 = vector[:index]
    subvector2 = vector[index:]

    return subvector1, subvector2


# Read input from the user
vector = []
while True:
    try:
        line = input()
        if not line:
            break
        vector.append(int(line))
    except EOFError:
        break

# Call the function and print the results
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
print(0)
for num in result2:
    print(num)