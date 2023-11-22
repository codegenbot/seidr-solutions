def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i in range(len(vector)):
        current_sum += vector[i]
        if current_sum == total_sum - current_sum:
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
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)