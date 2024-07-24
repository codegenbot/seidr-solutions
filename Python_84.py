```
K = None
while K not in [0, 1]:
    try:
        K = int(input("Enter a number (0 or 1): "))
        print(K)
        break
    except ValueError:
        print("Invalid input. Try again!")