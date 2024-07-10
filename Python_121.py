def solution(lst):
    total = 0
    odd_count = 0
    for i in lst:
        if i % 2 != 0:
            total += i
            odd_count += 1
    return f"The average of the odd numbers is {total / odd_count}"