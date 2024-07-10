def fruit_distribution(s, n):
    s = s.lower()
    fruits = [word for word in s.split() if word not in ['and', 'of']]
    total_fruits = sum(1 for fruit in fruits if fruit[0].isdigit())
    return total_fruits / (n or 1)

print(fruit_distribution("1 apples and 100 oranges", 120))