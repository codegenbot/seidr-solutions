def cut_vector(v):
    v.sort()
    diff = float("inf")
    cut_index = -1
    for i in range(len(v) - 1):
        if abs(v[i] - v[i + 1]) < diff:
            diff = abs(v[i] - v[i + 1])
            cut_index = i + 1
    return [v[:cut_index], v[cut_index:]]