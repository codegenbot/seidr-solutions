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
        print("Invalid input: Both inputs must be integers.")
    else:
        print(gcd(a, b))

    text = input()
    target = input()

    if len(target) > len(text):
        print("Invalid input: Target string cannot be longer than the text string.")
    else:
        print(indices_of_substring(text, target))
except ValueError as e:
    print("Invalid input:", str(e))