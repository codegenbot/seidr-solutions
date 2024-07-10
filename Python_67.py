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
            fruit = ""
            for j in range(i, len(words)):
                if not words[j].isalnum():
                    break
                fruit += words[j] + " "
            fruit = fruit.strip()
            fruits[fruit] = fruits.get(fruit, 0) + min(count, n)
        i += 1
    return len(fruits)