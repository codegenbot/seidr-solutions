```
def total_match(lst1, lst2):
    combined = sorted(lst1 + lst2)
    
    for i in range(len(combined)):
        if combined[i] in lst1:
            if combined[i:] != lst1 and combined[:i] != lst2:
                return combined[:i], combined[i:]
    return [], []