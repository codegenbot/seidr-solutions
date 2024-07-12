n = len(arr)
cut_index = min(range(n-1), key=lambda i: abs(sum(arr[:i+1]) - sum(arr[i+1:])))
subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]