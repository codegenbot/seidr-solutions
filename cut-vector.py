n = int(input())
arr = [int(input()) for _ in range(n)]

mid = n // 2
if sum(arr[:mid]) == sum(arr[mid:]):
    print(arr[:mid])
    print(arr[mid:])
else:
    diff = abs(sum(arr[:mid]) - sum(arr[mid:]))
    if sum(arr[:mid]) < sum(arr[mid:]):
        print(arr[:mid])
        print(arr[mid:] + [0] * diff)
    else:
        print(arr[:mid] + [0] * diff)
        print(arr[mid:])