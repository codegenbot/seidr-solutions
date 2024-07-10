```
def fruit_distribution(s, n):
    total_weight = sum(int(fruit) for fruit in s.split() if fruit.isdigit())
    return min(n - total_weight, 100)