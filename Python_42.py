```
def incr_list(n=None):
    while True:
        if n is None:
            try:
                n = int(input("Enter a number: "))
                if n < 1:
                    print("Number should be positive. Try again.")
                else:
                    return list(range(1, n+1))
                cont = input("Do you want to continue? (y/n): ")
                while cont.lower() != 'y' and cont.lower() != 'n':
                    cont = input("Invalid choice. Please enter y or n: ")
            except ValueError:
                print("Invalid input. Please enter an integer.")
        else:
            return list(range(1, n+1))