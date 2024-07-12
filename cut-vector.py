cut_index = arr.index(min(arr, key=lambda x: abs(sum(arr[:arr.index(x)]) - sum(arr[arr.index(x):])))
subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]