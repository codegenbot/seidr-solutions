```
def sort_third(lst):
    result = []
    for i in range(len(lst)):
        if i % 3 == 0:
            result.append(sorted([x for x in lst[i//3*3+min(i%3,3-1):] if x % 3 == 0]))
        else:
            result.append(lst[i])
    return result