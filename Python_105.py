
def by_length(arr):
    result = []
    for num in arr:
        if isinstance(num, int) and 1 <= num <= 9:
            result.append(f"{num}".zfill(2))
    return sorted(result, key=len, reverse=True)