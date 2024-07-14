```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            end = i + len(target)
            while end <= len(text) and text[end - 1:end].endswith(target):
                end += 1
            indices.extend(range(start, end))
    return indices

def main():
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(indices_of_substring(text, target))

if __name__ == "__main__":
    main()