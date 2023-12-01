def cut_vector(vector):
    n = len(vector)
    sum_left = [0] * (n + 1)
    sum_right = [0] * (n + 1)

    for i in range(1, n + 1):
        sum_left[i] = sum_left[i - 1] + vector[i - 1]
        sum_right[i] = sum_right[i - 1] + vector[n - i]

    min_diff = abs(sum_left[1] - sum_right[n - 1])
    cut_index = 1

    for i in range(2, n):
        diff = abs(sum_left[i] - sum_right[n - i])
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
    except:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)