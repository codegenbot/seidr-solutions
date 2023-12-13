text = input()
target = input()

indices = [str(i) for i in range(len(text)) if text[i:i+len(target)] == target and (i == 0 or text[i-1:i+len(target)-1] != target)]
print(" ".join(indices))