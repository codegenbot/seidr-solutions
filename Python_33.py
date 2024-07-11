```
def sort_third(lst):
    if len(lst) < 3:
        return []
    lst.sort(key=lambda x: (len(x), x[0]))
    result = [str(i) for i in lst[i-1] if (i+1)%3 == 0][:1]
    return tuple(result)

print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))