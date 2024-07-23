```
def basement(lst):
    total = 0
    i = 0
    while True:
        total += lst[i]
        if total < 0:
            return i
        i += 1