def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


print("GCD of two integers: Please enter two integers separated by space.")
input_values = input().split()
a, b = int(input_values[0]), int(input_values[1])
print(gcd(a, b))

print("Indices of a target string in a text: Please enter the text and target strings.")
text, target = input().split()
print(find_indices(text, target))