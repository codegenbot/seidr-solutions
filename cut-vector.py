cut_index = min(range(n), key=lambda i: abs(sum(arr[:i]) - sum(arr[i:])))
subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)