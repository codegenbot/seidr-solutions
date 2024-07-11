def below_zero() -> bool:
    numbers = []

    while True:
        num = input("Enter a number (or 'stop' to finish): ")

        if num.lower() == "stop":
            break
        try:
            num = int(num)
            numbers.append(num)
        except ValueError:
            print(
                "Invalid input. Please enter a whole number or type 'stop' to finish."
            )

    return sum(numbers) < 0