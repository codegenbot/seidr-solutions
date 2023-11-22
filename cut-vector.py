def cut_vector(vector):
    if len(vector) == 0:
        return [], []

    total_sum = sum(vector)
    min_diff = float("inf")
    split_index = 0

    for i, num in enumerate(vector):
        current_sum = sum(vector[: i + 1])
        diff = abs(current_sum - (total_sum - current_sum))

        if diff < min_diff:
            min_diff = diff
            split_index = i + 1

    return vector[:split_index], vector[split_index:]


vector = [int(input()) for _ in range(int(input()))]
subvector1, subvector2 = cut_vector(vector)
print(*subvector1, sep="\n")
print(*subvector2, sep="\n")