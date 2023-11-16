
def add(lst):
    result = 0
    for i in range(len(lst)):
        if lst[i] % 2 == 0:
            result += lst[i]
    return result
