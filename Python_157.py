a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

sorted_values = sorted([a, b, c], reverse=True)
a, b, c = sorted_values

result = is_pythagorean_triplet(a, b, c)