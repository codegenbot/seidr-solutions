def cut_vector(vector):
    total_sum = sum(vector)
    prefix_sum = 0
    for i, num in enumerate(vector):
        prefix_sum += num
        if prefix_sum == total_sum - prefix_sum:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


# Read input from user
input_vector = []
while True:
    try:
        input_line = input()
        input_vector.append(int(input_line))
    except EOFError:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(input_vector)
print("\n".join(str(num) for num in subvector1))
print("\n".join(str(num) for num in subvector2))