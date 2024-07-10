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
            total_count = min(min(int(word.split(": ")[1].split()[0]) for word in words[:i] if word.startswith(fruit)), n - sum(fruits.values()))
            fruits[fruit] = total_count
        i += 1
    return len(fruits)