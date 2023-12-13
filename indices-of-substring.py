text = input()
target = input()

indices = [i for i in range(len(text)) if target in text[i:]]
print(' '.join(str(i) for i in indices))