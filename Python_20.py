try:
    a, b, c = map(int, input("Enter 3 integers separated by spaces: ").split())
    print(a + b + c)
except ValueError:
    print("Invalid input. Please enter 3 integers separated by spaces.")
except Exception as e:
    print(f"An error occurred: {e}. Please try again.")