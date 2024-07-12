arr = list(map(int, input().split()))
cut_index = min(range(1, len(arr)), key=lambda x: abs(sum(arr[:x]) - sum(arr[x:])))
subvector1, subvector2 = arr[:cut_index], arr[cut_index:]
print(subvector1)
print(subvector2)