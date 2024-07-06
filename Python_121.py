def solution(lst):
    odd_indices = [(i, x) for i, x in enumerate(lst) if x % 2 != 0]
    return sum(i[1] for i in odd_indices if (i[0] + 1) % 2 == 0)