def cut_vector(arr):
    diff = float("inf")
    index = -1
    for i in range(1, len(arr)):
        left_sum = sum(arr[:i])
        right_sum = sum(arr[i:])
        current_diff = abs(left_sum - right_sum)
        if current_diff < diff:
            diff = current_diff
            index = i
    return arr[:index], arr[index:]


# Reading input
arr = []
for _ in range(int(input())):
    arr.append(int(input()))

# Getting the subvectors
sub_1, sub_2 = cut_vector(arr)

# Printing the results
print(*sub_1)
print(*sub_2)