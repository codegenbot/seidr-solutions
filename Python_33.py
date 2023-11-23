def sort_third(lst: list):
    lst.sort()
    groups = [lst[i:i+3] for i in range(0, len(lst), 3)]
    sorted_groups = sorted(groups, key=lambda x: (len(x), x[-1]))
    result = [num for group in sorted_groups for num in group]
    return result