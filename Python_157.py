while True:
    try:
        a, b, c = map(int, input("Enter three integers separated by space: ").split())
        if a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a:
            break
        else:
            print("Invalid input. Please enter valid side lengths for a triangle.")
    except ValueError:
        print("Invalid input. Please enter integers only.")
        
is_pythagorean = (a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2)
print(is_pythagorean)