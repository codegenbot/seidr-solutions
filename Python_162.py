import hashlib


def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()


text = input("Please enter a string: ")
while text.strip() == "":
    print("Invalid input. Please try again.")
    text = input("Please enter a string: ")

expected_hash = "your_predefined_hash_value"
if expected_hash == string_to_md5(text):
    print("Input is valid.")
else:
    print("Program did not receive expected input")