def cut_vector(lst):
    if len(set(lst)) == 1:
        return lst, []

    for i in range(1, len(lst)):
        left = sorted(list(set(lst[:i])))
        right = sorted(list(set(lst[i:])))
        if len(left) > 0 and len(right) > 0:
            diff = abs(left[-1] - right[0])
            if diff == 0:
                return lst[:i], lst[i:]
            else:
                return lst[: i - 1], [lst[i - 1]] + lst[i:]

    return [], lst