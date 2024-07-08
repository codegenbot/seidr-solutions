cut_index = len(arr) // 2

if abs(sum(arr[:cut_index]) - sum(arr[cut_index:])) <= abs(sum(arr[:cut_index + 1]) - sum(arr[cut_index + 1:])):
    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]
else:
    subvector1 = arr[:cut_index + 1]
    subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)