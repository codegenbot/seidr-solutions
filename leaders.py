def leaders(integers):
    return [
        integers[i]
        for i in range(len(integers) - 1, -1, -1)
        if all(integers[i] >= j for j in integers[i + 1 :])
    ]