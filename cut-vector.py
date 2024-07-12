if (
    sum(subvector1) == sum(subvector2)
    or abs(sum(subvector1) - sum(subvector2)) == min_diff
):
    print(*subvector1)
    print(*subvector2)
else:
    print(*arr[: cut_index + 2])
    print(*arr[cut_index + 2 :])