```
def fruit_distribution(s, n):
    parts = {}
    for word in s.split():
        if word.isdigit():
            continue
        elif word not in parts:
            parts[word] = 0
        parts[word] += 1
    return sum([v for v in parts.values()] if len(parts) >= n else 0)

s = input()
n = int(input())
print(fruit_distribution(s, n))