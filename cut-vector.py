def cut_vector(numbers):
    n = len(numbers)
    if n == 0:
        return [], []

    prefix_sum = [0] * (n + 1)
    for i in range(n):
        prefix_sum[i + 1] = prefix_sum[i] + numbers[i]

    total_sum = prefix_sum[n]
    min_diff = float("inf")
    split_index = -1

    for i in range(1, n):
        left_sum = prefix_sum[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    return numbers[:split_index], numbers[split_index:]


# Read input from user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

# Call the function and print the outputs
output1, output2 = cut_vector(numbers)
print("\n".join(map(str, output1)))
print("\n".join(map(str, output2)))