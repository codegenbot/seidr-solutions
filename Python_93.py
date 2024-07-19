message = input("Enter message to encode (letters and spaces only): ").strip()
assert message.replace(" ","").isalpha(), "Please enter alphabetic characters and spaces only"

shift = input("Enter shift value: ").strip()
assert shift.isdigit() and int(shift) >= 0, "Please enter a non-negative integer value for shift"
shift = int(shift)