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
                if words[j].isdigit():
                    break
                fruit += words[j] + " "
            fruit = fruit.strip()
            if fruit:
                if fruit in fruits:
                    fruits[fruit] += count
                else:
                    fruits[fruit] = count
        i += 1
    return len(fruits)