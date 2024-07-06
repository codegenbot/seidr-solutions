```Python
def sort_third(l: list):
    l_copy = l.copy()
    l_copy.sort(key=lambda x: (x % 3, -x))  
    return [
        i if i % 3 != 0 else [l_copy.pop(0) for _ in range(i % 3)][::-1].pop(0)
        for i in l
    ]