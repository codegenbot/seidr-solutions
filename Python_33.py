def sort_third(lst):
    result = []
    while len(lst) > 0:
        lst = [list(i) for i in lst]  
        temp = [i[2] for i in sorted(lst)]
        del lst[:]
        result.append(temp)
    return tuple(result)