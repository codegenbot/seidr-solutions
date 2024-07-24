def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result


def main():
    num1 = int(input())
    num2 = int(input())
    print(gcd(num1, num2))

    text = input()
    target = input()
    print(indices_of_substring(text, target))


main()