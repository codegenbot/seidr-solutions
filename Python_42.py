```
def incr_list(lst):
    result = []
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                result = [n + i for i in lst]
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    while True:
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() != 'y' and cont.lower() != 'n':
            print("Invalid choice. Please enter y or n: ")
        else:
            break
    return result