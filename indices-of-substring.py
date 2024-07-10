t, s = input().strip(), input().strip()
print(*[i for i in range(len(t)) if t.startswith(s, i)])