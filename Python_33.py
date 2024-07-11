```
def sort_third(l: list):
    l = [x for x in l]
    indices = {x: i for i, x in enumerate(l)}
    result = []
    i = 0
    while i < len(l):
        if i % 3 != 0:
            result.append(l[i])
        else:
            min_val = float('inf')
            for j in range(1, 4):
                if (i + j) % 3 != 0 and l[indices.get(l[i], None)] > l[indices.get(l[i+j], None)]:
                    min_val = l[indices.get(l[i+j], None)]
                    break
            result.append(min_val)
        i += 1
    return result