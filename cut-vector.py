# Read input
numbers = []
for _ in range(2):
    numbers.append(int(input()))

# Find the spot to cut the vector
total_sum = sum(numbers)
current_sum = 0
index = 0
min_diff = total_sum
for i in range(len(numbers)):
    current_sum += numbers[i]
    diff = abs(current_sum - (total_sum - current_sum))
    if diff < min_diff:
        min_diff = diff
        index = i

# Return the two resulting subvectors
print(numbers[: index + 1])
print(numbers[index + 1 :])