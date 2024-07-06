```Python
def sort_third(l: list):
    return [
        l[i] if i % 3 == 2 else (
            min(l[i], key=lambda x: (x[2], x)) 
            if i % 3 == 1 and len(x) > 2 
            else l[i]
        ) for i in range(len(l))
    ]