def sort_third(lst):
    return [x if i % 3 != 0 else min(lst[i-1 for i in range(len(lst)) if (i - lst.index(x)) % 3 == 2]) 
            for i, x in enumerate(sorted((x for i, x in enumerate(lst) if i % 3 != 0), reverse=True))]