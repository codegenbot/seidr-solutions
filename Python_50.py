def decode_shift():
    password = input("Please enter the shift value: ")
    if len(password) != 1 or not password.isdigit():
        raise ValueError("Invalid input. Please enter a single digit as the shift value.")
    return f"Password decoded: {int(password)}"