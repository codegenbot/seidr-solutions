def solution(lst):
    odd_indices = [(i, num) for i, num in enumerate(lst) if num % 2 != 0]
    return sum(num for _, num in odd_indices if (index + 1) % 2 == 0)