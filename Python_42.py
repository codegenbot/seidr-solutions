def incr_list():
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return list(range(1, n+1))

print(incr_list())