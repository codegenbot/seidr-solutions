def sort_third(lst):
    if len(lst) < 3:
        return []
    lst.sort(key=lambda x: (len(x), x[2]))
    result = [lst[i][2] for i in range(len(lst)) if (i + 1) % 3 == 0][:1]
    return tuple(result)


print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))