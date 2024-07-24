n = int(input())
A = []
for i in range(n):
    A.append(int(input()))

total_sum = sum(A)
half_sum = total_sum // 2
left_sum = 0
for i in range(n):
    left_sum += A[i]
    if left_sum >= half_sum:
        break

if abs(total_sum - 2 * left_sum) < abs(total_sum - 2 * (left_sum - A[i])):
    left_subvector = A[: i + 1]
    right_subvector = A[i + 1 :]
else:
    left_subvector = A[:i]
    right_subvector = A[i:]

print(*left_subvector)
print(*right_subvector)