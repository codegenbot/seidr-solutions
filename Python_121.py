
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    pass

    return sum([i for i in lst if i%2==1 and lst.index(i)%2==0])
    solution([30, 13, 24, 321]) ==>0
    """
