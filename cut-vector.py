n = int(input())
A = [int(input()) for _ in range(n)]
total_sum = sum(A)
half_sum = total_sum // 2
closest_sum = 0
for i in range(n):
    if closest_sum + A[i] <= half_sum:
        closest_sum += A[i]
    else:
        break
if closest_sum == half_sum:
    print(*A[: i + 1])
    print(*A[i + 1 :])
else:
    print(*A)
    print(0)