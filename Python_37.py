def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    count_even = len(evens)
    
    return [i if i % 2 != 0 else evens.pop(0) if count_even > 0 else None for i in sorted([x for x in l if x % 2 != 0], reverse=True)]