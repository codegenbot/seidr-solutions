```
def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            next_index = (i + 1) % 3
            while True:
                try:
                    next_element = l[next_index]
                    break
                except IndexError:
                    next_index += 1
            min_element = min(y for y in l if (next_index + 1) % 3 != 0 or y == x)
            result.append(min_element)
    return sorted(result)