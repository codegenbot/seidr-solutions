```
def fruit_distribution(fruits, amount):
    distribution = {}
    for fruit in fruits.split(','):
        if fruit not in distribution:
            distribution[fruit] = 0
        distribution[fruit] += 1 / amount
    return distribution

print(fruit_distribution(input("Enter the list of fruits: "), int(input("Enter the amount: "))))