def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_idx = i
            while True:
                if not text[start_idx : start_idx + len(target)].startswith(target):
                    break
                result.append(start_idx)
                start_idx += 1
    return result


n = int(input())
m = int(input())

print(gcd(n, m))

text = input()
target = input()

print(indices_of_substring(text, target))