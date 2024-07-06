```
def incr_list():
    result = []
    while True:
        try:
            n = int(input("Enter the number of elements: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    for _ in range(n):
        while True:
            try:
                i = int(input("Enter a number to increment: "))
                if i < 1:
                    print("Number should be positive. Try again.")
                else:
                    result.append(i + 1)
                    break
            except ValueError:
                print("Invalid input. Please enter an integer.")

    cont = input("Do you want to continue? (y/n): ")
    while True:
        if cont.lower() == 'n':
            return result
        elif cont.lower() == 'y':
            return incr_list()
        else:
            cont = input("Invalid input. Please enter y or n: ")