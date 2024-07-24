while True:
    K = int(input("Enter a number (0 or 1): "))
    if 0 <= K <= 1:
        print(K)
        break
    else:
        print("Invalid input")
        continue