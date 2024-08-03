n = int(input())
arr = [int(input()) for _ in range(n)]

diff = abs(sum(arr) - 2 * sum(arr[:1]))

for i in range(1, n):
    new_diff = abs(sum(arr[:i]) - sum(arr[: i + 1]))
    if new_diff <= diff:
        diff = new_diff
    else:
        break

print(arr[:i])
print(arr[i:])