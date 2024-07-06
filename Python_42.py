```
def incr_list(lst=None):
    result = []
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                result = [n + i for i in result]  
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    while True:
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() == 'y':
            return result
        elif cont.lower() == 'n':
            return result
        else:
            print("Invalid choice. Please enter y or n: ")