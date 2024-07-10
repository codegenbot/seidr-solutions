def is_pythagorean_triplet(a, b, c):
    numbers = [a, b, c]
    numbers.sort()
    return numbers[0]**2 + numbers[1]**2 == numbers[2]**2

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

print(is_pythagorean_triplet(a, b, c))