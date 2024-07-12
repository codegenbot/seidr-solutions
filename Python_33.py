def sort_third(lst):
    return [
        x if i % 3 != 0 else sorted([y for y in lst if (j:=lst.index(y))%3!=i//3])[::-1][0] 
        for i, x in enumerate(lst)
    ]