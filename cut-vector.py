def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i, num in enumerate(vector):
        current_sum += num
        if (
            current_sum == total_sum - current_sum
            or current_sum + num == total_sum - current_sum
        ):
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]


vector = []
try:
    while True:
        num = int(input())
        vector.append(num)
except EOFError:
    pass

output1, output2 = cut_vector(vector)
print(*output1, sep='\n')
print(*output2, sep='\n')