even_indices = sorted([l[i] for i in range(0, len(l), 2)])
    result = []
    even_idx = 0
    for i in range(len(l)):
        if i % 2 == 0:
            result.append(even_indices[even_idx])
            even_idx += 1
        else:
            result.append(l[i])
    return result