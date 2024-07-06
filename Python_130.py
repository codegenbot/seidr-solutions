def tri(n):
    if n == 0:
        return [1]
    elif n == 1:
        return [3]
    else:
        # Handle case where n > 2
        if n > 2:
            result = [1, 3] + [
                result[i - 1] + result[i - 2] + result[i + 1] for i in range(2, n + 1)
            ]
        return result