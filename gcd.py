def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result


def main():
    a = int(input())
    b = int(input())
    print(gcd(a, b))

    text = input()
    target = input()
    print(indices_of_substring(text, target))


if __name__ == "__main__":
    main()