def find_average(lst: List[int]) -> float:
    if not lst:
        return 0

    total = sum(lst)
    count = len(lst)

    return total / count