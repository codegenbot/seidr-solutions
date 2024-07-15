def sort_third(l: list) -> list:
"""
This function sorts the third elements of sublists within a main list.
If the index is multiple of three, it sorts all subsequent multiples of three
in reverse order and assigns to the original index.

    """
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[i//3*3+min(i%3,3-1):] if x % 3 == 0])[::-1]
        )
        for i in range(len(l))
    ]