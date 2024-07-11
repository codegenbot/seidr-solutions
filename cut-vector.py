n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(a):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum:
            print(*a[: i + 1])
            print(*a[i + 1 :])
        else:
            if prefix_sum - half_sum < total_sum - prefix_sum:
                print(*a[: i + 1])
                print(*a[i + 1 :])
            else:
                print(*a[:i])
                print(*a[i:])
        break