def find_zero():
    n = int(input())
    xs = list(map(int, input().split()))
    a = xs[-1]
    b = xs[-2]
    return -b / a