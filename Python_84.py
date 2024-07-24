while True:
    K = int(input("Enter a number (0 or 1): "))
    if K in [0, 1]:
        print(K)
        break
    else:
        print("Invalid input. Try again!")