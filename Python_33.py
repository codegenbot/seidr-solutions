def sort_third(lst):
    result = []
    for i, x in enumerate(lst):
        if i % 3 != 0:
            result.append(x)
        else:
            temp = [y for y in lst[:i] + lst[i+1:] if (lst.index(y) - i) % 3 != 0]
            temp.sort()
            temp = temp[::-1]
            result.extend([x] + temp[:1])
    return tuple(result)