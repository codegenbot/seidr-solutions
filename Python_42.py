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
        cont = input("Do you want to continue? (y/n): ")
        while cont.lower() != 'y' and cont.lower() != 'n':
            cont = input("Invalid choice. Please enter y or n: ")
    return result