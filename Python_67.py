```
def fruit_distribution(s, n):
    s = s.lower()
    fruits = [word for word in s.split() if word not in ['and', 'of'] and not word[0].isdigit()]
    total_fruits = len(fruits)
    return total_fruits / (n or 1)

print(fruit_distribution("1 apples and 100 oranges", 120))