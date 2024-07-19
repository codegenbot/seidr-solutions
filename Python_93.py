input("Enter message to encode (letters and spaces only): ")
message = input()
assert message.replace(
    " ", ""
).isalpha(), "Please enter alphabetic characters and spaces only. Try again."

input("Enter shift value: ")
shift = input()
assert (
    shift.isdigit() and int(shift) >= 0
), "Please enter a non-negative integer value for shift. Try again"
shift = int(shift)