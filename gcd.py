def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        indices.append(pos + 1)
        pos += 1
    return indices


if __name__ == "__main__":
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(find_indices(text, target))