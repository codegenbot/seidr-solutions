def cut_vector(vector):
    min_diff = float("inf")
    index = 0

    for i in range(len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            index = i

    subvector1 = vector[:index]
    subvector2 = vector[index:]

    return subvector1, subvector2


input_vector = []
try:
    while True:
        input_vector.append(int(input()))
except EOFError:
    pass

output_vector1, output_vector2 = cut_vector(input_vector)

for element in output_vector1:
    print(element)

for element in output_vector2:
    print(element)