n = int(input())
arr = [int(x) for x in input().split()]
total_sum = sum(arr)
cut_index = min(range(n), key=lambda i: abs(sum(arr[: i + 1]) - sum(arr[i + 1 :])))

subvector1 = (
    arr[: cut_index + 1]
    if sum(arr[: cut_index + 1]) == sum(arr[cut_index + 1 :])
    else arr[:cut_index]
)
subvector2 = (
    arr[cut_index + 1 :]
    if sum(arr[: cut_index + 1]) == sum(arr[cut_index + 1 :])
    else arr[cut_index:]
)

print(*subvector1)
print(*subvector2)