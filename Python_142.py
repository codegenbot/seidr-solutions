def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            num = calculate_sum_of_cubes(n)
            if num < 1000000:
                print("The sum of cubes is less than 1 million.")
                break
            else:
                print("The sum of cubes exceeds 1 million. Please try again.")
        except ValueError:
            print("Invalid input. Please enter an integer.")

check()