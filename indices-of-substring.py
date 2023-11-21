text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target]
print(' '.join(str(i) for i in indices))