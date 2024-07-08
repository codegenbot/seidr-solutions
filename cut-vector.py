if cut_index == 0:
    subvector1 = [arr[0]]
    subvector2 = arr[1:]
else:
    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)