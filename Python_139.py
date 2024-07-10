def read_input_and_output():
    n = int(input("Enter a number: "))
    if n < 0:
        print("Invalid input. Please enter a non-negative integer.")
    else:
        output = special_factorial(n)
        print(f"The special factorial of {n} is {output}")