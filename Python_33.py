```
def sort_third(lst):
    if len(lst) < 3:
        return []
    lst.sort(key=lambda x: x[2])
    return [x[2] for i, x in enumerate(lst) if (i+1)%3 == 0][:1]