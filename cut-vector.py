def cut_vector(vector):
    smallest_diff = float("inf")
    cut_index = -1

    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < smallest_diff:
            smallest_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]


# Read input vector from user
vector = []
while True:
    num = input()
    if num == "":
        break
    vector.append(int(num))

# Call the function and print the results
subvector1, subvector2 = cut_vector(vector)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)