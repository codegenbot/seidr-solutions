def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    current_index = 0
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + current_index)
        current_index += len(target)
        text = text[pos + len(target) :]
    return indices


def main():
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(find_indices(text, target))


if __name__ == "__main__":
    main()