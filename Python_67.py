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
            fruit = words[i - 1]
            distributed = min(count, n)
            fruits[fruit] = fruits.get(fruit, 0) + distributed
            n -= distributed
            while count > distributed and i < len(words):
                i += 1
                if not words[i].isdigit():
                    break
                next_count = int(words[i])
                distributed = min(next_count, n - (count - distributed))
                fruits[fruit] = fruits.get(fruit, 0) + distributed
                n -= distributed
            count -= distributed
        else:
            while i < len(words) and not words[i].isdigit():
                fruit = words[i]
                i += 1
            if i >= len(words):
                break
            count = int(words[i])
            i += 1
            distributed = min(count, n)
            fruits[fruit] = fruits.get(fruit, 0) + distributed
            n -= distributed
    return sum(fruits.values())