def fruit_distribution(s, n):
    s = s.lower()
    if not s: return 0
    total_weight = int(''.join(filter(str.isdigit, s)))
    if n != total_weight:
        raise ValueError("The provided weight does not match the given text")
    fruits = [word for word in s.split() if word not in ['and', 'of'] and not word[0].isdigit()]
    return len(fruits)

print(fruit_distribution("1 apples and 100 oranges", 101))