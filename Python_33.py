def sort_third(l: list):
    result = []
    for i in l:
        if i % 3 != 0:
            result.append(i)
        else:
            temp = [x for x in l if x % 3 == 0]
            temp.sort()
            result.append(temp[-1])
    return result