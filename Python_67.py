```python
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
            if fruit:
                total_count += min(count, n - total_count)
                fruits[fruit] = total_count
        i += 1
    return len(fruits)