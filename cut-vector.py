def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum >= total_sum / 2:
            if current_sum == total_sum / 2 or abs(current_sum - total_sum / 2) < abs(
                current_sum - num - total_sum / 2
            ):
                return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input vector
vector = list(map(int, input().split()))

# Call the function and print the output
result1, result2 = cut_vector(vector)
print(*result1)
print(*result2)