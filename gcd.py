```
while True:
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
        print(gcd(a, b))
        text = input("Enter the text string: ")
        target = input("Enter the target string: ")
        print(find_indices(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter integers for gcd and strings for find_indices.")