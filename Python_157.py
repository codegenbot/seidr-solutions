def is_pythagorean_triple(a, b, c):
    return (
        sorted([a, b, c])[0] ** 2 + sorted([a, b, c])[1] ** 2
        == sorted([a, b, c])[2] ** 2
    )

a = int(input())
b = int(input())
c = int(input())

print(is_pythagorean_triple(a, b, c))