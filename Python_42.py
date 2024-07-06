def incr_list():
    while True:
        try:
            n = int(input("Enter a number: "))
            return list(range(1, n+1))
        except ValueError:
            print("Invalid input. Please enter an integer.")

print(incr_list())