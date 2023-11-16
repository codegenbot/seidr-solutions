

def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    """
    ulst = []
    for i, e in enumerate(lst):
        if e % 2 == 0 and i % 2 == 1:
            ulst.append(2 * e)
        elif e % 2 == 0 and i % 2 == 0:
            ulst.append(e + 1)
        elif e % 2 == 1 and i % 2 == 0:
            ulst.append(e + 2)

    return ulst
