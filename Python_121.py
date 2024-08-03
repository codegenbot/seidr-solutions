def find_max_min_average(lst):
    min_value = min(lst)
    max_value = max(lst)
    average = sum(lst) / len(lst)
    return [min_value, max_value, average]