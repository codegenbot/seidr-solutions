n = int(input())
arr = [int(input()) for _ in range(n)]

diff = abs(sum(arr) / 2)
result = []
for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    if abs(left_sum - right_sum) <= diff:
        result = [arr[:i], arr[i:]]
        diff = abs(left_sum - right_sum)

for subvector in result:
    print(*subvector)
print(0)