def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2

inputs = [int(input("Enter a: ")), int(input("Enter b: ")), int(input("Enter c: "))]
if len(set(inputs)) == 3:
    a, b, c = sorted(inputs)
    result = is_pythagorean_triplet(a, b, c)
    print(result)
else:
    print("Input values should be distinct integers.")