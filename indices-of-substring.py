text = input().strip()
target = input().strip()

indices = [
    i
    for i in range(len(text))
    if text.find(target, i) == i and (i == 0 or text[i - 1] != target[0])
]
print(" ".join(str(i) for i in indices) if indices else "0")