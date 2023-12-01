def cut_vector(numbers):
    smallest_diff = float("inf")
    cut_index = 0

    for i in range(1, len(numbers)):
        diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
        if diff < smallest_diff:
            smallest_diff = diff
            cut_index = i

    subvector1 = numbers[:cut_index]
    subvector2 = numbers[cut_index:]

    return subvector1, subvector2


# Read input from user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(numbers)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)