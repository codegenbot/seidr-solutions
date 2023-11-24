def cut_vector(vector):
    n = len(vector)
    prefix_sum = [0] * (n + 1)
    for i in range(1, n + 1):
        prefix_sum[i] = prefix_sum[i - 1] + vector[i - 1]
    total_sum = prefix_sum[n]
    answer = (float("inf"), -1, -1)

    for i in range(1, n + 1):
        left_sum = prefix_sum[i]
        right_sum = total_sum - prefix_sum[i]
        diff = abs(right_sum - left_sum)
        if diff < answer[0]:
            answer = (diff, i, i + 1)

    left = vector[: answer[1]]
    right = vector[answer[2] :]
    print(left)
    print(right)


vector = []
for _ in range(int(input())):
    vector.append(int(input()))

cut_vector(vector)