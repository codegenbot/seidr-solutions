```
def fruit_distribution(s, n):
    s = s.lower()
    fruits = s.replace("and", ",").split(",")
    total_fruits = sum(1 for fruit in fruits if fruit.split()[0].isdigit())
    return total_fruits / (n or 1)

print(fruit_distribution("1 apples and 100 oranges", 120))