```
def solution(lst):
    result = []
    for i in range(len(lst)):
        if lst[i] % 2 != 0:
            result.append(i + 1)
    return sum(i for i in result if (i + 1) % 2 == 0)