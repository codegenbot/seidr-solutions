```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
    return indices if indices else [-1]


def main():
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(indices_of_substring(text, target))


main()