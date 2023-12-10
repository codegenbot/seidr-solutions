text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target or target in text[i:i+len(target)-1]]
print(' '.join(map(str, indices)))