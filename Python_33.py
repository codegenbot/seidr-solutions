def sort_third(lst: list):
    length = len(lst)
    remainder = length % 3
    if remainder != 0:
        lst += [float('inf')] * (3 - remainder)
    
    groups = [lst[i:i+3] for i in range(0, len(lst), 3)]
    sorted_groups = sorted(groups, key=lambda x: x[2])
    return [num for group in sorted_groups for num in group if num != float('inf')]