def sort_third(l: list):
    l_dict = {x: i for i, x in enumerate(l)}
    l_sorted = sorted((x, i) for i, x in enumerate(l))
    result = []
    for i, (val, _) in enumerate(l_sorted):
        if len(result) >= 3:
            break
        if i % 3 != 0:
            continue
        last_val = None
        for j in range(max(0, i - 1), min(len(l_sorted), i + 2)):
            last_val = l_sorted[j][0]
        result.append(last_val)
    return result