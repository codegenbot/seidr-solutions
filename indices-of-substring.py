text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if target.lower() == text[i:i+len(target)].lower() or any(target[j].lower() != text[i+j].lower() for j in range(len(target)))]

if len(indices) == 0:
    print("-1")
else:
    print(" ".join(map(str, indices)))