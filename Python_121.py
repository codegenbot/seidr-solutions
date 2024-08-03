def solution(lst):
    for num in lst:
        if num % 2 == 0:
            raise ValueError("List should contain at least one odd number")
    return sum(i for i in lst[1::2] if i % 2 != 0)