def main():
    try:
        user_input = int(input().strip())
        if user_input <= 0:
            print("Input must be a positive integer")
        else:
            result = factorize(user_input)
            print(result)
    except ValueError:
        print("Invalid input")