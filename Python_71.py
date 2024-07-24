def perfect_square_sum_of_natural_numbers(n):
    result = 0
    for i in range(1, n + 1):
        result += i**2
    return result


def sum_of_squares(n):
    result = 0
    for i in range(1, n + 1):
        result += i**2
    return result


def check(area):
    sqrt = int(area**0.5)
    if sqrt * sqrt == area:
        print("The area of the triangle is a perfect square.")
    else:
        print("The area of the triangle is not a perfect square.")


base = float(input("Enter the base of the triangle: "))
while True:
    try:
        height = float(input("Enter the height of the triangle: "))
        break
    except ValueError:
        print("Invalid input! Please enter a number.")
triangle_area = (base * height) / 2

check(triangle_area)