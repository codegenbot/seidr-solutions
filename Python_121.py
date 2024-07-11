def solution(lst):
    if not isinstance(lst, list):
        raise TypeError("Input must be a list")
    print(sum(i for i in lst[1::2] if i % 2 != 0))