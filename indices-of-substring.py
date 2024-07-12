import sys

text = sys.stdin.readline().strip()
target = sys.stdin.readline().strip()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]
for index in indices:
    print(index)