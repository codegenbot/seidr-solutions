```
def sort_third(lst):
    numbers = [x for x in lst if not isinstance(x, list)]
    long_lists = [x for x in lst if isinstance(x, list) and len(x) > 3]
    
    numbers.sort()
    long_lists.sort(key=lambda x: x[2] if len(x) > 2 else float('inf'))
    
    return numbers + long_lists