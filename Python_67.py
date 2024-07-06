def fruit_distribution():
    s = input()
    n = int(input())
    fruits = {}
    for word in s.split():
        if word.isdigit():
            continue
        if word not in fruits:
            fruits[word] = 1
        else:
            fruits[word] += 1
    return sum(fruits.values()) // len(fruits) if len(fruits) >= n else 0


print(fruit_distribution())