def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = 0
            while True:
                j = text.find(target, i + j)
                if j == -1:
                    break
                result.append(i + j)
                i += j + len(target)
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