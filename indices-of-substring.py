text = input()
target = input()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target or target in text[i:i+len(target)]]

print(" ".join(map(lambda x: str(x+1), indices)))