def incr_list(lst):
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                return [n + i for i in lst]
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")