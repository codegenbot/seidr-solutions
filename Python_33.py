```
def sort_third(l: list):
    result = []
    for i in l:
        if i % 3 != 0:
            result.append(i)
        else:
            zeros = [x for x in l if x % 3 == 0]
            result.append(sorted(zeros)[-1])
    return result