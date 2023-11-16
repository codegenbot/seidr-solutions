
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9

     """
    result = 0
    for index in range(len(lst)):
        if index % 2 == 1 and lst[index] % 2 == 1:
            result += lst[index]
    print('solution({0}) = {1}'.format(lst, result))
    return result

solution([3, 13, 2, 9])
