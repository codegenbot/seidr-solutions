Here is the modified code:

def sort_third(lst):
    return [sorted([i for i in lst if (i % 3 == 0 and idx != 2) or (i % 3 == 2)], reverse=True) for idx, _ in enumerate(lst)]