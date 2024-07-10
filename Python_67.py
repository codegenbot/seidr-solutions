```Python
def fruit_distribution(s, n):
    s = s.lower()
    fruits = [word for word in s.split() if 'fruit' in word or not 'and' in word]
    return len(fruits) / (n or 1)

print(fruit_distribution("1 apples and 100 oranges", 120))