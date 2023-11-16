
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even
    positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    sa=0
    for a in range(len(lst)):
        if a % 2 == 0 and lst[a] % 2 == 1:
            sa +=lst[a]
    return sa
    solution([30, 13, 24, 321]) ==>0
    """
