```
def sort_third(lst):
    numbers = [x for x in lst if not isinstance(x, list)]
    lists = [x for x in lst if isinstance(x, list) and len(x) >= 3]
    
    numbers.sort()
    lists.sort(key=lambda x: x[2] if len(x) > 2 else None if len(x) <= 2 else float('inf'))
    
    return numbers + lists