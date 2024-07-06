def solution(lst):
    odd_indices = [(i, j) for j, i in enumerate(lst) if i % 2 != 0]
    return sum(i for i, _ in odd_indices if (_ + 1) % 2 == 0)