def sort_third(lst: list):
    groups = [lst[i:i+3] for i in range(0, len(lst)-2, 3)]
    remaining = lst[len(lst)//3 * 3:]
    if len(remaining) == 2:
        remaining = []
    sorted_groups = sorted(groups, key=lambda x: (x[-1], len(x)), reverse=True)
    result = [num for group in sorted_groups for num in group]
    return result