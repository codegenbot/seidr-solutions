def fruit_distribution(s, n):
    s = s.lower()
    if not s:
        return 0
    fruits = {}
    words = s.split()
    i = 0
    while i < len(words):
        if words[i].isdigit():
            count = int(words[i])
            i += 1
            fruit = words[i - 1]
            total_count = sum(fruits.get(k, 0) for k in fruits)
            distributed = min(count, n - total_count) if fruit in fruits else 0
            remaining = count - distributed
            if fruit:
                fruits[fruit] = fruits.get(fruit, 0) + distributed
        i += 1
    return len(fruits)