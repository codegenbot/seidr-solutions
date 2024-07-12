```
def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    result = []
    index = 0
    for i in range(len(l)):
        if i % 2 != 0:
            result.append(l[i])
        else:
            result.append(evens[index])
            index += 1
    return result