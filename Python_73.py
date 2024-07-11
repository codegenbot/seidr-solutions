def smallest_change(arr):
    n = len(arr)
    front_sum = sum(arr[: n // 2])
    back_sum = sum(arr[n // 2 :])

    if n % 2 == 0:
        return abs(front_sum - back_sum)
    else:
        return min(
            abs(front_sum - (back_sum + arr[n // 2])),
            abs((front_sum + arr[0]) - back_sum),
        )