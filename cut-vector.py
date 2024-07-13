def cut_vector(v):
    left = 0
    for i in range(1, len(v)):
        if v[i] - v[left] > (v[i // 2 + left] - v[left]):
            break
        left += 1
    return v[: left + 1], v[left:]