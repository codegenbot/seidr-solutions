s, t = input().strip(), input().strip()
print(*[i for i in range(len(s)) if s.startswith(t, i)])