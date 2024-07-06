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

    while True:
        try:
            i = int(input("Enter a number to increment: "))
            if i < 1:
                print("Number should be positive. Try again.")
            else:
                result.append(i)
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    while True:
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() == 'n':
            return result
        else:
            pass

print(incr_list())