```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return ' '.join(map(str, indices))

text = input()
target = input()

print(gcd(int(input()), int(input())))
print(find_indices(text, target))