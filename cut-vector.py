CutSpot = min(range(n), key = lambda i: abs(sum(arr[:i]) - sum(arr[i:])))
subvector1 = arr[: CutSpot]
subvector2 = arr[CutSpot:]

print(*subvector1)
print(*subvector2)