```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    return [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]

if __name__ == "__main__":
    a = int(input())
    b = int(input())

    print(gcd(a, b))

    text = input()
    target = input()

    print(find_indices(text, target))