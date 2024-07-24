def count_squares(n: int):
    if n < 0:
        return "Input should be a non-negative integer."
    else:
        return sum([i**2 for i in range(n+1)])