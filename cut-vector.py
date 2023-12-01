def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i in range(len(vector)):
        current_sum += vector[i]
        if current_sum * 2 == total_sum or current_sum * 2 - vector[i + 1] == total_sum:
            return vector[: i + 1], vector[i + 1 :]


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the output subvectors
subvector1, subvector2 = cut_vector(vector)
print(subvector1)
print(subvector2)