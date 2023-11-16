
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    pass
    if len(lst) == 0 or len(lst) % 2 == 0:
        return 0
    odd_positions = [i for i in lst if i%2 != 0 and i%2 == 0]
    res = 0
    for elem in odd_positions:
        res = res + elem
    return res

    solution([30, 13, 24, 321]) ==>0
    """
