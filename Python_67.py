```
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
            total_count = sum(fruits.get(k, 0) for k in fruits)
            remaining_count = n - total_count
            for c in str(count):
                count = int(c) if c.isdigit() else 1
                while count > 0 and remaining_count >= 1:
                    if fruit not in fruits or fruits[fruit] < count:
                        fruits[fruit] = min(count, remaining_count)
                        remaining_count -= fruits[fruit]
                    count -= 1
        i += 1
    return len(fruits) + (1 if any(count > n for count in fruits.values()) or sum(fruits.values(), 0) > n else 0)