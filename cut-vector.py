def cut_vector():
    input_num = int(input())
    vector = input().split()
    vector = list(map(int, vector))
    n = len(vector)
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, n):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if min_diff > abs(vector[0] - total_sum + vector[0]):
        min_diff = abs(vector[0] - total_sum + vector[0])
        cut_index = 0

    return [], [] if cut_index == 0 else vector[:cut_index+1], vector[cut_index+1:]