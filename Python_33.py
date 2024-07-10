def sort_third(lst):
    numbers = [x for x in lst if not isinstance(x, list)]
    lists = [sorted(x) if len(x) >= 3 else sorted(x) for x in lst if isinstance(x, list)]
    
    numbers.sort()
    lists.sort(key=lambda x: x[2] if len(x) > 2 else x)
    
    return numbers + lists