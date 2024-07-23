def solution(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    return (even, odd)

result = solution([1, 2, 3, 4, 5, 6])
print(result)