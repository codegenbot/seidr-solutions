while True:
    try:
        n = int(input("Enter an integer: "))
        print("Integer entered:", n)
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
    except EOFError:
        print("Program did not receive expected input. Exiting.")
        break