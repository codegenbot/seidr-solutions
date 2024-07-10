Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

indices = [m.start() for m in re.finditer(target, text)]

print(gcd(int(input()), int(input())))
print(indices)