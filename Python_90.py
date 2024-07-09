def next_smallest(lst):
    unique_elements = sorted(set(lst))
    if len(unique_elements) < 2:
        return None
    return unique_elements[1]