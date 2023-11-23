def sort_third(lst: list):
    sorted_lst = sorted(
        [lst[i:i+3] for i in range(0, len(lst), 3)],
        key=lambda x: x[1] if 1 < len(x) else float('inf')
    )
    return sorted_lst