def get_valid_input():
    a, b, c = 0, 0, 0
    while True:
        try:
            a, b, c = map(int, input("Enter three integers separated by space: ").split())
            break
        except ValueError:
            print("Invalid input. Please enter three integers separated by space.")
    return a, b, c

a, b, c = get_valid_input()

def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

print(is_pythagorean_triplet(a, b, c))