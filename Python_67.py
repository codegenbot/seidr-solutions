def fruit_distribution(s, n):
    fruits = {"apples": 0, "oranges": 0}
    for fruit in s.split():
        if fruit in fruits:
            fruits[fruit] += int(''.join(filter(str.isdigit, fruit)))
        elif not fruit.lower() == 'and':
            return None
    total_fruits = sum(fruits.values())
    return n - total_fruits - 1