text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if target in text[i:i+len(target)]]
print(indices[0] if indices else 0)