
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in odd positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    pass
    solution([30, 13, 24, 321]) ==>0
    """ 

    summ = 0
    for idx, value in enumerate(lst):
        if(value % 2 == 1 and idx % 2 == 1):
            summ += value

    return summ
