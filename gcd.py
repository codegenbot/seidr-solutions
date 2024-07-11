def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


values = input("Enter two integers (separated by space): ").split()
a, b = map(int, values)
print(gcd(a, b))

text, *targets = input("Enter text and target string(s) (separated by space): ").split(
    maxsplit=1
)
print(
    *[
        index
        for index in range(len(text))
        if all([text.startswith(target, index) for target in targets])
    ]
)