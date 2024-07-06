def incr_list(lst=None):
    result = []
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                result.append(n)
        except ValueError:
            print("Invalid input. Please enter an integer.")

    cont = input("Do you want to continue? (y/n): ")
    while cont.lower() != "n":
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                result.append(n)
        except ValueError:
            print("Invalid input. Please enter an integer.")
        cont = input("Do you want to continue? (y/n): ")
    return result