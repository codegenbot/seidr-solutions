def sort_third(lst: list):
    groups = [lst[i:i+3] for i in range(0, len(lst), 3)]
    sorted_groups = sorted(groups, key=lambda x: sum(x), reverse=True)
    return [num for group in sorted_groups for num in group]