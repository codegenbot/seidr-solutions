if cut_index == n - 1:
    subvector1 = arr
    subvector2 = []
else:
    subvector1 = arr[:cut_index + 1]
    subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)