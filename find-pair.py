```
def find_pair(n):
    s = sum(int(i) for i in input().split())
    t = int(input())
    a = []
    for _ in range(n):
        a.append(int(input()))
    a.sort()
    l, r = 0, len(a)-1
    while l < r:
        if a[l] + a[r] == t - s:
            print(*[str(i) for i in [a[l], a[r]]])
            return 
        elif a[l] + a[r] < t-s:
            l += 1
        else:
            r -= 1
    print(*[str(i) for i in []])