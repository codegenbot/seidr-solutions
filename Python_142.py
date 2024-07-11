```
def sum_squares(n):
    if isinstance(n, list):
        return [i**2 for i in n]
    else:
        return n**2

print(sum_squares([1]))