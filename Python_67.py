```
def fruit_distribution(s, n):
    s = s.lower()
    fruits = s.split("and")
    for i in range(len(fruits)):
        if "," in fruits[i]:
            fruits[i] = fruits[i].replace(",", "")
    total = sum(int(''.join(fruit.split()[1:]) or '1') for fruit in fruits[:n])
    return total/n

print(fruit_distribution("1 apples and 100 oranges", 120))