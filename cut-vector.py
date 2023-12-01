def cut_vector(vector):
    length = len(vector)
    if length == 1:
        return vector, [0]
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = 0
    for i in range(length - 1):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i + 1
    return vector[:cut_index], vector[cut_index:]


# Read input from user
vector = []
while True:
    try:
        value = int(input())
        vector.append(value)
    except:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(vector)
for value in left_subvector:
    print(value)
for value in right_subvector:
    print(value)