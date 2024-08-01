Here is a Python solution for the problem:

def basement(lst):
    total = 0
    for i in range(len(lst)):
        if total < 0:
            return i
        total += lst[i]
    return -1