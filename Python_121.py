def solution(lst):
    odd_sums = [sum(i for i in lst[i::2] if i % 2 != 0) for i in range(len(lst))]
    return max(odd_sums)