text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target and (i == 0 or text[i-1] != target[0])]
print(" ".join(map(str, indices)))