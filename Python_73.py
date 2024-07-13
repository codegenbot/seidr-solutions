```
def array_change(lst):
    smallest = int(lst[0])
    total = 0
    for num in lst:
        if abs(int(num) - smallest) > 1:
            return -1
        smallest = int(num)
        total += abs(int(num) - smallest)
    return total