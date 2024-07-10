def check(lst):
    min_diff = float("inf")
    result = []
    for i in range(len(lst) - 1):
        closest_pair = (abs(lst[i] - lst[i + 1]), (lst[i], lst[i + 1]))
        if abs(lst[i] - lst[i + 1]) < min_diff:
            min_diff = abs(lst[i] - lst[i + 1])
        result.append(closest_pair)
    return min(result, key=lambda x: x[0])[1]