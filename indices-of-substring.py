text = input()
target = input()

indices = [i for i, _ in enumerate(text[:-len(target)+1]) if text[i:i+len(target)] == target]
print(" ".join(map(str, indices)))