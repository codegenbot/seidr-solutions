```
def find_pair(n):
    a = list(map(int, input().split()))
    a.sort()
    for i in range(len(a)-1):
        l, r = 0, len(a) - 1
        while l < r:
            s = a[l] + a[r]
            if s == n:
                print(*[a[i], a[r]])
                return
            elif s < n:
                l += 1
            else:
                r -= 1

n = int(input())
find_pair(n)