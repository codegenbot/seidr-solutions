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
            j = i
            while j < len(words) and words[j].isalnum():
                fruit += words[j] + " "
                j += 1
            fruit = fruit.strip()
            total_count = sum(fruits.get(k, 0) for k in fruits)
            if fruit:
                distributed = min(count, n - total_count)
                remaining = count - distributed
                total_count += distributed
                if fruit:
                    fruits[fruit] = distributed
        i += 1
    return len(fruits) + (
        1
        if any(count > n for count in fruits.values()) or sum(fruits.values(), 0) > n
        else 0
    )