def sort_third(l: list):
    sorted_list = [sorted(l[i:i+3]) for i in range(0, len(l), 3) if i + 2 < len(l)]
    sorted_list.sort(key=lambda x: x[2] if len(x) >= 3 else x[-1])
    return sorted_list