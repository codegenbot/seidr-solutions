def tri(n):
    if n == 1:
        return [1, 3]
    elif n % 2 == 0:
        return [1, 3, 2] + tri(n//2)
    else:
        return [1, 3, 2] + tri(n-1) + tri(n+1)