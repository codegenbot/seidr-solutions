def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        start = text.find(target, current_index)
        if start == -1:
            break
        result.append(start + 1)
        current_index = start + len(target)
    return result


# Example usage:
a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))