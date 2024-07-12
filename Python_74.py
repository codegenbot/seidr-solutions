```
def total_match(lst1, lst2):
    total_chars1 = sum(len(s) for s in lst1)
    total_chars2 = sum(len(s) for s in lst2)
    
    if len([s for s in lst1 + lst2 if s in lst1]) > len([s for s in lst1 + lst2 if s in lst2]):
        return lst1
    elif len([s for s in lst1 + lst2 if s in lst1]) < len([s for s in lst1 + lst2 if s in lst2]):
        return lst2
    else:
        return lst1