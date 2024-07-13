```Python
def sorted_list_sum(lst):
    numbers = [s for s in lst if any(c.isdigit() for c in s)]
    return sorted(numbers)