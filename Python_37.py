```
def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odd = [x for i, x in enumerate(l) if i % 2 != 0]
    result = []
    evencount = 0
    for x in l:
        if evencount < len(even):
            result.append(even[evencount])
            evencount += 1
        else:
            result.append(odd.pop(0))
    return result