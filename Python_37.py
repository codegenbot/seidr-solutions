```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    result = []
    j = 0
    for i in range(len(l)):
        if l[i] % 2 == 0:
            result.append(evens[j])
            j += 1
        else:
            result.append(ods.pop(0))
    return result