def solution(lst):
    if not isinstance(lst, list) or any(not isinstance(i, int) for i in lst):
        return "Invalid input: Please provide a list of integers."
    else:
        return sum(i for i in lst[1::2] if i % 2 != 0)