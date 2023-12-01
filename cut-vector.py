def cut_vector(vector):
    i = 0
    j = len(vector) - 1
    left_sum = vector[i]
    right_sum = vector[j]

    while i < j:
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[j:]

        if left_sum < right_sum:
            i += 1
            left_sum += vector[i]
        else:
            j -= 1
            right_sum += vector[j]

    return vector[: i + 1], vector[j:]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the output
result1, result2 = cut_vector(vector)
for num in result1:
    print(num)
for num in result2:
    print(num)