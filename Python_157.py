def is_pythagorean_triple(a, b, c):
    sorted_numbers = sorted([a, b, c])
    return sorted_numbers[0] ** 2 + sorted_numbers[1] ** 2 == sorted_numbers[2] ** 2

a, b, c = map(int, input().split())

print(is_pythagorean_triple(a, b, c))