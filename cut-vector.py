def cut_vector(vector):
    n = len(vector)
    total_sum = sum(vector)
    prefix_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(n):
        prefix_sum += vector[i]
        suffix_sum = total_sum - prefix_sum
        diff = abs(suffix_sum - prefix_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    subvector1 = vector[: cut_index + 1]
    subvector2 = vector[cut_index + 1 :]

    return subvector1, subvector2


# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the outputs
output1, output2 = cut_vector(vector)
for num in output1:
    print(num)
for num in output2:
    print(num)