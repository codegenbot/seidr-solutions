```
def order_by_points(numbers):
    return sorted((n, sum(map(int, str(abs(n))))) for n in numbers)