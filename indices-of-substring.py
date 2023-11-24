text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if target.lower() in text[i:i+len(target)].lower().replace(",", "")]

if len(indices) == 0:
    print("-1")
else:
    print(" ".join(map(str, [x + 1 for x in indices])))