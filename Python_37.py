```
def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    result = []
    for i, num in enumerate(l):
        if num % 2 == 0:
            result.append(sorted_evens.pop(0))
        else:
            result.append(num)
    return result