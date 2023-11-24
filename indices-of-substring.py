text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target and len(text[i:i+len(target)]) == len(target)]
print(" ".join(map(str, indices)))