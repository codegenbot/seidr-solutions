def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]


text = input()
target = input()

print(gcd(int(input()), int(input())))
print(find_indices(text, target))