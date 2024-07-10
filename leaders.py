def leaders(integers):
    return [
        integers[i]
        for i in range(len(integers) - 1, -1, -1)
        if all(integers[i] >= integers[j] for j in range(i + 1, len(integers)))
    ]