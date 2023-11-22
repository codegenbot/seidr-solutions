def cut_vector(arr):
    n = len(arr)
    total_sum = sum(arr)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = 0

    for i in range(n):
        left_sum += arr[i]
        right_sum -= arr[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return arr[: cut_index + 1], arr[cut_index + 1 :]


# Read input from user
arr = []
while True:
    try:
        num = int(input())
        arr.append(num)
    except EOFError:
        break

# Call the function and print the output
output1, output2 = cut_vector(arr)
print(*output1, sep="\n")
print(*output2, sep="\n")