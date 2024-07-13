```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result


try:
    a = int(input())
    b = int(input())

    if not isinstance(a, int) or not isinstance(b, int):
        raise ValueError("Inputs must be integers")

    print(gcd(a, b))

    text = input()
    target = input()

    if len(target) > len(text):
        raise ValueError("Target string cannot be longer than the text.")

    print(indices_of_substring(text, target))
except ValueError as e:
    print("Invalid input:", str(e))