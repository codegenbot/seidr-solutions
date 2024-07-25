n = int(input())
a = [int(input()) for _ in range(n)]
diff = float("inf")
index = -1
for i in range(1, n):
    left_sum = sum(a[:i])
    right_sum = sum(a[i:])
    if abs(left_sum - right_sum) < diff:
        diff = abs(left_sum - right_sum)
        index = i
print(*a[:index])
print(*a[index:])