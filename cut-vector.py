def cut_vector(vector):
    min_diff = abs(sum(vector) - vector[0])
    index = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            index = i
    return vector[:index], vector[index:]


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
print(*subvector1)
print(*subvector2)