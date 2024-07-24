```
while True:
    try:
        K = int(input("Enter a number (0 or 1): "))
        if 0 <= K <= 1:
            print(K)
            break
        else:
            print("Invalid input")
    except ValueError:
        print("Please enter an integer.")