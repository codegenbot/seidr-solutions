def solution(lst):
    if not any(i % 2 == 0 for i in lst):
        return "List does not contain an even number"
    else:
        return sum(i for i in lst[1::2] if i % 2 != 0)