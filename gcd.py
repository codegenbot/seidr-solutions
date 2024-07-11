def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        pos = text.find(target, current_index)
        if pos == -1:
            break
        result.append(pos + 1)
        current_index = pos + 1
    return result


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        print(gcd(a, b))