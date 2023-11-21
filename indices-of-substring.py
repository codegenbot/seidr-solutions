text = input()
target = input()

if target == "":
    indices = []
else:
    indices = [i for i in range(len(text)) if text[i:i+len(target)] == target]
print(" ".join(map(str, indices)))