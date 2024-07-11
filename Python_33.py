```
def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            if i // 3 * 3 + 3 <= len(l):
                sorted_group = [x for x in l[i//3*3:i//3*3+3]]
                sorted_group.sort()
                result.append(sorted_group[1])
            else:
                result.append(None)
        else:
            result.append(l[i])
    return result