def is_pythagorean_triple(a, b, c):
    return (
        sorted([a, b, c])[0] ** 2 + sorted([a, b, c])[1] ** 2
        == sorted([a, b, c])[2] ** 2
    )

a, b, c = map(int, input("Enter three integers separated by spaces: ").split())
print(is_pythagorean_triple(a, b, c))