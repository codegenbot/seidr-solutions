```
def sort_even(l):
    result = []
    for i in range(min(len(l), len(l))):
        if l[i] % 2 == 0:
            temp = sorted([x for x in l if x % 2 == 0])[::-1]
            for j, k in enumerate(temp):
                if k <= l[i]:
                    result.append(k)
                    break
        else:
            result.append(l[i])
    return result