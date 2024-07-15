```
def sort_third(l: list) -> list:
    """
    The function takes a list of integers as input and sorts the elements at 
    indices that are multiples of three in reverse order. The remaining 
    elements are left unchanged.
    """
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[i//3*3+min(i%3,3-1):] if x % 3 == 0])[::-1]
        )
        for i in range(len(l))
    ]