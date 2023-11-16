from itertools import accumulate, cycle, repeat, takewhile

def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even
    positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 11
    solution([3, 3, 3, 3, 3]) ==> 9

    return sum(takewhile(lambda x: x == '0', list(accumulate( [int(i) for i in list(
                           reduce(lambda s,i:'10'[ int(s[-1])^(int(i)&1) ]+s,lst.replace('?', str(i)), '0')[::-1]) 
                           for i in cycle([0,1])]))))
    solution([30, 13, 24, 321]) ==>0
    """
