```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    return [i for i in range(len(text)-len(target)+1) if text.startswith(target, i)]

if __name__ == "__main__":
    print(gcd(12, 15))
    print(find_indices("Hello world", "world"))