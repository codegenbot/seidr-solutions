import sys

def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if current_sum >= total_sum - current_sum:
            return vector[:i+1], vector[i+1:]
    return vector, [0]

# Read input from user
input_vector = []
for line in sys.stdin:
    input_vector.append(int(line))

# Call the function and print the output
left_vector, right_vector = cut_vector(input_vector)
for num in left_vector:
    print(num)
for num in right_vector:
    print(num)