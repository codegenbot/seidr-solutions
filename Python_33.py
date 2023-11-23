def sort_third(lst: list):
    sorted_lst = sorted(
        [lst[i:i+3] for i in range(0, len(lst), 3)],
        key=lambda x: x[2] if len(x) > 2 else float('inf')
    )
    return [num for sublist in sorted_lst for num in sublist]