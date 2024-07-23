```
strings = input().split()
print(''.join(map(str, sorted(set(map(str, strings)), key=len, reverse=True))))