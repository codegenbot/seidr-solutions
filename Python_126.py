```
def is_sorted(lst):
    for i in range(len(lst)-1):
        if lst[i] >= lst[i+1]:
            if len(set(lst)) != len(lst):
                return False
            else:
                return False
    return True