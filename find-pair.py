def find_pair(n):
    a = [int(x) for x in input().split()]
    t = int(input())
    a.sort()
    left, right = 0, len(a) - 1
    while left < right:
        if a[left] + a[right] == t:
            print(*[a[left], a[right]])
            return
        elif a[left] + a[right] < t:
            left += 1
        else:
            right -= 1


n = int(input())
find_pair(n)