def sort_third(lst: list):
    groups = [lst[i:i+3] for i in range(0, len(lst)-2, 3)]
    if len(lst) % 3 != 0:
        remaining = lst[len(lst)//3 * 3:]
        if remaining:
            groups.append(remaining)
    sorted_groups = sorted(groups, key=lambda x: (x[2], len(x)))
    return [num for group in sorted_groups for num in group]