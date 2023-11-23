def main():
    user_input = input().strip().split(",")  # Read input once
    if not user_input:
        print("No input provided")
        return

    try:
        user_input = [int(n) for n in user_input if n.isdigit()]
        if any(not n.isdigit() or int(n) <= 0 for n in user_input):
            print("Input values must be positive integers")
        else:
            result = [factorize(int(n)) for n in user_input if n.isdigit()]
            print(" ".join(str(f) for sublist in result for f in sublist))
    except ValueError:
        print("Invalid input")