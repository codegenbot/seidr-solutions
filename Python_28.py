strings = input().split()
strings.sort(key=len)
print(" ".join(strings))