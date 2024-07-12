arr = list(map(int, input().split()))
cut_index = arr.index(min(arr, key=lambda x: abs(sum(arr) - 2 * sum(arr[: arr.index(x) + 1])))
subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index + 1:]
print(subvector1)
print(subvector2)