Here is the completed code:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

print(gcd(int(input()), int(input())))
print(indices)