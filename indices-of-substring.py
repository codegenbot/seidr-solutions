text = input().strip().lower()
target = input().strip().lower()

indices = [i for i in range(len(text)-len(target)+1) if target in text[i:i+len(target)]]

print("\n".join(map(str, indices)) if indices else "-1")