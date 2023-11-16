
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions.
    

    Examples
    solution([5, 8, 7, 1]) ==> 12
    solution([3, 3, 3, 3, 3]) ==> 9
    sum_of_odd_elements = 0
    for index, element in enumerate(lst):
        sum_of_odd_elements = sum_of_odd_elements + element if index % 2 != 0 and element % 2 != 0 else sum_of_odd_elements

    return sum_of_odd_elements
    solution([30, 13, 24, 321]) ==>0
    """
