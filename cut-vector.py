def cut_vector(numbers):
    half_sum = sum(numbers) / 2
    current_sum = 0
    for i, num in enumerate(numbers):
        current_sum += num
        if current_sum == half_sum or current_sum - num == half_sum:
            return numbers[: i + 1], numbers[i + 1 :]
    return numbers, [0]


# Read input from user
input_numbers = []
num_inputs = int(input())
for _ in range(num_inputs):
    input_numbers.append(int(input()))

# Call the function and print the output
output_vectors = cut_vector(input_numbers)
for vector in output_vectors:
    print(vector)