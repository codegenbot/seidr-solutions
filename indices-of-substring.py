text = input()
target = input()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target or text[i:i+len(target)].count(target) > 0]

print(" ".join(map(str, indices)))