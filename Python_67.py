def fruit_distribution(s, n):
    fruits = {}
    for word in s.split():
        if word.isdigit():
            continue
        elif word not in fruits:
            fruits[word] = int(word)
        else:
            fruits[word] += int(word)
    return sum(fruits.values()) // len(fruits) if len(fruits) >= n else 0


s = input()
n = int(input())
print(fruit_distribution(s, n))