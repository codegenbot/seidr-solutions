text = input().strip()
target = input().strip()

indices = [i+1 for i in range(len(text)) if text[i:i+len(target)] == target]

print(' '.join(map(str, indices)))