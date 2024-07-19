message = input("Enter message to encode (letters and spaces only): ")
assert all(char.isalpha() or char.isspace() for char in message), "Please enter alphabetic characters and spaces only"

shift = input("Enter shift value: ")
assert shift.isdigit() and int(shift) >= 0, "Please enter a non-negative integer value for shift"
shift = int(shift)