def find_pair(n):
    s = [int(x) for x in input().split()]
    s.sort()
    left, right = 0, len(s) - 1
    while left < right:
        total = s[left] + s[right]
        if total == 0:
            print(f"{s[left]}")
            print(f"{s[right]}")
            return
        elif total > 0:
            right -= 1
        else:
            left += 1

find_pair(int(input()))