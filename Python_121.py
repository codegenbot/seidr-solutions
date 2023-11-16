
def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions."""

    return sum(lst[::2])


def check(solution):
    assert solution([3, 13, 2, 9]) == 3
    assert solution([3, 3, 3, 3, 3]) == 9
    assert solution([3, 13, 2, 9]) == 3


check(solution)
