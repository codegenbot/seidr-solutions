```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    result = []
    for i in range(len(l)):
        if l[i] % 2 == 0:
            result.append(evens.pop(0) if evens else l[i])
        else:
            result.append(l[i])
    return result