def solution(lst):
    """Given a non-empty list of integers, return the sum of all of the odd elements that are in even positions."""
    return sum([lst[i] for i in range(len(lst)) if lst[i] % 2 == 1 and i % 2 == 0])
