def sort_third(lst):
    return [i if i % 3 != 0 else min([x for x in lst[:i] if x % 3 == 0]) 
            for _ in range(len(lst))]