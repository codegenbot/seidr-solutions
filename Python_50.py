def decode_shift():
    password = input("Please enter the password: ")
    if len(password) != 1 or not password.isupper():
        raise ValueError("Invalid input. Please enter a single uppercase letter as the password.")
    return f"Password decoded: {password}"