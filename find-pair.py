```
def find_pair(n):
    for i in range(int(input(""))):
        a = list(map(int, input().split()))
        target = int(input(""))
        a.sort()
        left, right = 0, len(a) - 1
        while left < right:
            current_sum = a[left] + a[right]
            if current_sum == target:
                print(f"{a[left]} {a[right]}")
                return
            elif current_sum < target:
                left += 1
            else:
                right -= 1

find_pair(int(input()))