def cut_vector(vector):
    min_diff = float("inf")
    index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            index = i
    return vector[:index], vector[index:]

vector = list(map(int, input().split()))

subvector1, subvector2 = cut_vector(vector)
print(*subvector1)
print(*subvector2)