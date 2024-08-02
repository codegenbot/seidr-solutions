def count_nums(arr):
    return sum(
        1
        for x in arr
        if sum(int(c) if c != "-" else -int(c) for c in str(x).lstrip("-")) > 0
    )