```Python
input_list = input("Enter the list of coefficients (a, b, c): ").split()
xs = [float(i) for i in input_list]
try:
    result = find_zero(xs)
    print(result)
except ValueError as e:
    print(str(e))