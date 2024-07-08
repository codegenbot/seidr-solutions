```
def total_match(lst1, lst2):
    if sum(len(i) for i in lst1) < sum(len(i) for i in lst2):
        return lst1
    elif sum(len(i) for i in lst1) > sum(len(i) for i in lst2):
        return lst2
    else:
        return [i for i in lst1 if i not in lst2 or len(i) != min(map(len, lst2))] + [j for j in lst2 if j not in lst1]