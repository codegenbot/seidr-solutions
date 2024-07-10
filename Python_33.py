def sort_third(lst):
    numbers = sorted([x for x in lst if isinstance(x, (int, float))])
    lists = [sorted(x)[2:] if len(sorted(x)) >= 3 else [] 
             for x in [i for i in lst if isinstance(i, list)]]
    
    return numbers + [item for sublist in lists for item in sublist]