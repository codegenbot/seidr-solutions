```
def sort_third(l):
    index_dict = {x: i for i, x in enumerate(l)}
    result = []
    for i, x in enumerate(sorted(l)):
        if i % 3 == 0:
            result.append(x)
        else:
            min_val = float('inf')
            prev_index = index_dict[x]
            next_index = (i + 1) % len(l)
            for j, y in enumerate(l):
                if abs(j - prev_index) < abs(min_val - i) and y <= x:
                    min_val = j
                elif abs(j - next_index) < abs(min_val - i) and y >= x:
                    min_val = j
            result.append(l[min_val])
    return result