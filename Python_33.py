def sort_third(lst):
    result = []
    prev_min = None
    for i in range(len(lst)):
        if i % 3 == 0:
            result.append(
                min(x for x in lst[: i + 1] if x % 3 != 0)
                if prev_min is None
                else prev_min
            )
            prev_min = result[-1]
        else:
            result.append(lst[i])
    return result