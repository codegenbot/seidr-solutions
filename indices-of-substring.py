text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.find(target, i) >= i+len(target)-1]
print(" ".join(str(i) for i in indices))