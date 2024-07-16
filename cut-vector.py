def cut_vector(v):
    n = len(v)
    for i in range(n - 1):
        if np.abs(np.mean(v[: i + 1]) - np.mean(v[i:])) < np.abs(np.mean(v) - v[0]):
            return (v[: i + 1], v[i:])
    return (v, [0])