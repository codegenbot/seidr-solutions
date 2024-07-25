def main():
    while True:
        prompt = input(
            "Enter a series of integers to check if they're prime, or '0' to quit."
        )
        if prompt == "0":
            break
        try:
            num = int(prompt)
            print(is_prime(num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")