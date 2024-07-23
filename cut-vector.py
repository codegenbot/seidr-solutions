n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
left_sum = 0
for i, num in enumerate(a):
    if left_sum == total_sum - left_sum or abs(left_sum - (total_sum - left_sum)) < abs(
        sum(output) - 2 * left_sum
    ):
        output = a[: i + 1], a[i + 1 :]
    left_sum += num

print(*output[0])
print(*output[1])