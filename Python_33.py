def sort_third(lst):
    lst.sort(key=lambda x: (x % 3, -abs(x)))
    result = []
    for i in range(0, len(lst), 3):
        result.append(lst[i])
    return result