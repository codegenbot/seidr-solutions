def sort_third(lst: list):
    return sorted([lst[i:i+3] if len(lst[i:i+3]) == 3 else lst[i:i+3]+[float('inf')] for i in range(0, len(lst), 3)], key=lambda x: x[2])