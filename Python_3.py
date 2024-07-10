while True:
    try:
        n = int(input("Please enter a number: "))
        print(n)
        break
    except:
        print("Invalid input. Please enter a valid integer.")