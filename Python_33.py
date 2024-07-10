def sort_third(lst):
    numbers = [x for x in lst if not isinstance(x, list)]
    lists = [x for x in lst if isinstance(x, list) and len(x) > 2]
    
    numbers.sort()
    lists.sort(key=lambda x: x[2])
    
    return numbers + lists