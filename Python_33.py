```Python
def sort_third(l: list):
    return [sorted([x for i, x in enumerate(l) if (i+1) % 3 == 0])[0] if (i+1) % 3 == 0 else x 
            for i, x in enumerate(sorted([x for i, x in enumerate(l) if (i+1) % 3 != 0], reverse=True))]