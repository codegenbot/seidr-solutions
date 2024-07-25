try:
    a, b, c = map(int, input().split())
    print(a + b + c)
except ValueError:
    print("Error: Invalid input. Please enter 3 integers separated by spaces.")
except EOFError:
    print("Error: Expected 3 integers, received insufficient input.")
except:
    print("Error: Unexpected input or insufficient values provided. Please enter 3 integers separated by spaces.")