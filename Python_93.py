message = input("Enter message to encode (letters and spaces only): ")
while not all(char.isalpha() or char.isspace() for char in message):
    message = input("Please enter alphabetic characters and spaces only: ")

shift = input("Enter shift value: ")
while not shift.isdigit() or int(shift) < 0:
    shift = input("Please enter a non-negative integer value for shift: ")
shift = int(shift)