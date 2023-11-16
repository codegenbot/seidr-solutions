def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) == 9
    solution([3, 3, 3, 3, 3]) == 3
    """
    result = 0
    for i, x in enumerate(lst):
        if i % 2 == 0 and x % 2 == 1:
            result += x
    return result

    
    """
