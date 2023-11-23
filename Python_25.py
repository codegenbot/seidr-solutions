def main():
    user_input = input().strip()
    if not user_input:
        print("No input provided")
        return

    try:
        user_input = list(map(int, user_input.split(",")))
        result = [factorize(n) for n in user_input]
        output = " ".join(str(f) for sublist in result for f in sublist)
        print(output)
    except ValueError:
        print("Invalid input")