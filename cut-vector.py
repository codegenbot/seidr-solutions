n = int(input())
v = [int(input()) for _ in range(n)]

if n % 2 == 0:
    idx = n // 2
else:
    idx = n // 2 + 1

left_subvector = v[:idx]
right_subvector = v[idx:]
if (
    sum(left_subvector) == sum(right_subvector)
    or abs(sum(left_subvector) - sum(right_subvector)) <= 1
):
    print(*left_subvector)
    print(*right_subvector)
else:
    print(*v)
    print(0)