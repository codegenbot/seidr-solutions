
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.


    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    result = 0
    for idx, no in enumerate(lst):
        print('idx =>', idx)
        print('no =>', no)
        if not idx % 2 and no % 2:
            print('even index {} adds up even number {}'.format(idx, no))
            result += idx + no
    return result
    solution([30, 13, 24, 321]) ==>0
    """
