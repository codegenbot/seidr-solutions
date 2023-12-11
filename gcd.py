```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    if a == 1:
        return 1
    else:
        return a

def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

def main():
    # Test cases
    print(gcd(1, 1)) # 1
    print(gcd(4, 400000)) # 4
    print(gcd(54, 24)) # 6
    print(gcd(4200, 3528)) # 168
    print(gcd(820000, 63550)) # 2050
    print()
    print(get_indices("banana", "na")) # [1, 3]
    print(get_indices("hello", "ll")) # [2, 3]
    print(get_indices("abcdefg", "efg")) # [4, 5, 6]

if __name__ == "__main__":
    main()
```