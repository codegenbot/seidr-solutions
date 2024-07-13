def cut_vector(vector):
    for i in range(1, len(vector)):
        if sum(vector[:i]) == sum(vector[i:]):
            return vector[:i], vector[i:]
        elif min(
            abs(sum(vector[:i]) - sum(vector[i:])),
            abs(sum(vector[: -i - 1]) - sum(vector[-i:])),
        ):
            return vector[: i + 1], vector[i:]
    return [], []


input_vector = list(map(int, input().split()))
print(cut_vector(input_vector)[0])
print(cut_vector(input_vector)[1])