def solution(lst):
    odd_indices = {i: j for j, i in enumerate(lst) if i % 2 != 0}
    return sum(i for i in lst if i % 2 != 0 and (odd_indices[i] + 1) % 2 == 0)