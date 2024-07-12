```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text.startswith(target, i):
            indices.append(i)
    return indices

if __name__ == "__main__":
    a = int(input())
    b = int(input())

    print(gcd(a, b))

    text = input()
    target = input()

    print(find_indices(text, target))