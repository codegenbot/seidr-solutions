def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        remaining_sum = total_sum - current_sum
        if current_sum == remaining_sum or abs(current_sum - remaining_sum) < abs(
            sum(output1) - sum(output2)
        ):
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


input_vector = []
while True:
    try:
        line = input()
        input_vector.append(int(line))
    except EOFError:
        break

output1, output2 = cut_vector(input_vector)
print(*output1, sep="\n")
print(*output2, sep="\n")