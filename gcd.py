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

    print(gcd(a, b))

    text = input()
    target = input()

    if len(target) > len(text):
        print("Target string is longer than the text.")
    else:
        print(indices_of_substring(text, target))
except ValueError as e:
    print("Invalid input:", str(e))