t, s = input(), input()
print(*[i for i in range(len(t)) if t.startswith(s, i)])