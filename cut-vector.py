n = int(input())
a = [int(input()) for _ in range(n)]

total = sum(a)
left_sum = 0
ans = float("inf")
index = 0

for i in range(n - 1):
    left_sum += a[i]
    right_sum = total - left_sum
    diff = abs(left_sum - right_sum)
    if diff < ans:
        ans = diff
        index = i

subvector1 = a[: index + 1]
subvector2 = a[index + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")