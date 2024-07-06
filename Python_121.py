def solution(lst):
    odd_indices = [(i, x) for i, x in enumerate(lst) if x % 2 != 0]
    return sum(i for _, i in odd_indices if (index + 1) % 2 == 0)