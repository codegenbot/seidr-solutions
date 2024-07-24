def smallest_change(arr):
    arr = str(arr)
    front = arr[: len(arr) // 2]
    back = (
        arr[len(arr) - 1 : len(arr) // 2 - 1 : -1]
        .lstrip("[")
        .rstrip("]")
        .replace(",", "")
    )

    changes = 0
    for i in range(len(front)):
        if front[i] != back[len(back) - i - 1]:
            changes += 1

    return changes