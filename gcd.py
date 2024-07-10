```
values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Error: Enter exactly two integers separated by space.")
else:
    a, b = map(int, values)
    print(gcd(a, b))

text, *_ = input("Enter text and target string (separated by space): ").split(
    maxsplit=1
)
target = text[0]
print(*indices_of_substring(text, target))


def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    start_index = 0
    while True:
        index = text.find(target, start_index)
        if index == -1:
            break
        indices.append(index)
        start_index = index + 1
    return indices