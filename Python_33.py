```
def sort_third(lst):
    result = sorted((x[2], x) for x in lst)
    return [i[1] for i in result]