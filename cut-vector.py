subvector1 = (
    arr[:cut_index]
    if abs(sum(arr[:cut_index]) - sum(arr[cut_index:]))
    <= abs(sum(arr[: cut_index + 1]) - sum(arr[cut_index + 1 :]))
    else arr[: cut_index + 1]
)
subvector2 = (
    arr[cut_index:]
    if abs(sum(arr[:cut_index]) - sum(arr[cut_index:]))
    <= abs(sum(arr[: cut_index + 1]) - sum(arr[cut_index + 1 :]))
    else arr[cut_index + 1 :]
)