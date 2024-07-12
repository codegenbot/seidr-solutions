if cut_index == n-1:
    cut_index -= 1
    subvector1 = arr[:cut_index+1]
    subvector2 = arr[cut_index+1:]
else:
    subvector1 = arr[:cut_index+1]
    subvector2 = arr[cut_index+1:]