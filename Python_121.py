

def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    return sum([lst[i] for i in range(1, len(lst), 2) if i % 2 == 0])
    return sum(lst[1::2])
    solution([30, 13, 24, 321]) ==> 0
    solution([3, 13, 2, 9]) ==> 3
    """
