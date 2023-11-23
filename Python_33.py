def sort_third(lst: list):
    return sorted([lst[i:i+3] for i in range(0, len(lst), 3)], key=lambda x: x[2])