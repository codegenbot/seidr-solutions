try:
    a = int(input())
    b = int(input())
except ValueError:
    print("Invalid input. Please enter integers.")


def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


text = input()
target = input()

print(gcd(a, b))
print([i for i in range(len(text)) if text.startswith(target, i)])