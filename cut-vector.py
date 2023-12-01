def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        if abs(left_sum - right_sum) <= abs(left_sum - (total_sum - left_sum)):
            return vector[: i + 1], vector[i + 1 :]

    return vector, [0]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the results
result1, result2 = cut_vector(vector)
print(*result1, sep="\n")
print(*result2, sep="\n")