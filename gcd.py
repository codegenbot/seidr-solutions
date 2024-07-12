def gcd(a, b):
    try:
        return abs(gcd(b, a % b)) if b else a
    except TypeError:
        print("Invalid input. Please enter integers.")
        exit()

a = int(input())
b = int(input())

print(gcd(a, b))

def find_indices(text, target):
    try:
        return [i for i in range(len(text)-len(target)+1) if text.startswith(target, i)]
    except TypeError:
        print("Invalid input. Please enter strings.")
        exit()

text = input()
target = input()

print(find_indices(text, target))