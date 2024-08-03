def cut_vector(v):
    diff = float("inf")
    cut_index = -1
    for i in range(1, len(v)):
        if v[i] == v[0]:
            return [v[:i], v[i:]]
        elif abs(v[i] - v[0]) < diff:
            diff = abs(v[i] - v[0])
            cut_index = i
    if cut_index != -1:
        return [v[:cut_index], v[cut_index:]]
    return [v, []]