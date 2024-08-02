def gcd(m, n):
    while math.gcd(n, m) % n != 0:
        n, m = m % n, n
    return n

text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:].startswith(target)]

print(gcd(int(input()), int(input())))
print(' '.join(map(str, indices)))