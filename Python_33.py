def sort_third(lst: list):
    lst += [0] * (3 - len(lst) % 3)
    groups = [lst[i:i+3] for i in range(0, len(lst)-2, 3)]
    sorted_groups = sorted(groups, key=lambda x: (-len(x), x[-1], x))
    return [num for group in sorted_groups for num in group if num != 0]