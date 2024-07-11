```
gcd = lambda a, b: abs(a) if b == 0 else gcd(b, a % b)
text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

print(gcd(int(input()), int(input())))
print(' '.join(map(str, indices)))