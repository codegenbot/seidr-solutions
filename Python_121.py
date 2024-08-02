def solution(lst):
    result = 0
    odd_count = 0
    for index, value in enumerate(lst):
        if value % 2 != 0:
            odd_count += 1
            if (index + 1) % 2 == 0:
                result += value
    return result