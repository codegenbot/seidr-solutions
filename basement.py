def basement(lst):
    for i, num in enumerate(lst):
        total = sum(lst[: i + 1])
        if total < 0:
            return i
    return -1