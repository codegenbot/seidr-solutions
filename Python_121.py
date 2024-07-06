def solution(a, b):
    return sum(i for i in a[1::2] if i % 2 != 0) + sum(i for i in b[1::2] if i % 2 != 0)