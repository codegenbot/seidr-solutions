n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
left_sum = 0
cut_index = 0

for i in range(n):
    left_sum += arr[i]
    if left_sum >= half_sum:
        cut_index = i
        break

if abs(left_sum - (total_sum - left_sum)) < abs(
    left_sum - arr[cut_index] - (total_sum - left_sum)
):
    cut_index -= 1

print(*arr[: cut_index + 1])
print(*arr[cut_index + 1 :])