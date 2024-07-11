def solution(lst):
    difference = abs((max(lst) - min(lst)))
    return (difference * 2) + sum(i**2 for i in lst if isinstance(i, int) and i > 0)