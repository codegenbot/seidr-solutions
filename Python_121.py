def solution(lst):
    odd_count = 0
    for num in lst:
        if int(num) % 2 != 0 and int(num) > 1:
            odd_count += 1
    return 0 if odd_count == 0 else int(lst[0]) * (sum(int(i) for i in lst[1::2] if int(i) > 1 and int(i) % 2 != 0))