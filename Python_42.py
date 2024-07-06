def incr_list():
    result = None
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                result = list(range(1, n+1))
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return result

print(incr_list())