def sum_squares(n):
    return sum(i**2 for i in range(1, n+1))

while True:
    user_input = input("Enter a positive integer (or leave blank to exit): ")
    
    if not user_input:
        print("Bye!")
        break

    try:
        n = int(user_input)
        if n > 0:
            print(sum_squares(n))
            break
        else:
            print("Please enter a positive integer.")
    except (ValueError, TypeError):
        print("Invalid input. Please try again. Use only numbers (e.g., 123) or leave the field blank to exit.")