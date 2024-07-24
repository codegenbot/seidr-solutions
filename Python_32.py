```
while True:
    print("Find roots of quadratic equation ax^2 + bx + c = 0: ")
    result = find_zero()
    while True:
        response = input(f"Roots found: {result}. Do you want to solve another equation? (yes/no): ")
        if response.lower() == 'yes':
            break
        elif response.lower() == 'no':
            print("Program terminated.")
            exit(0)
        else:
            print("Invalid response. Please enter yes or no.")