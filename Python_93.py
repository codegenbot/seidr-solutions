```
print("Enter a message to encode:")
while True:
    try:
        message = str(input())
        break
    except ValueError:
        print("Invalid input. Please enter a string.")
if not message:
    print("No message provided. Exiting.")
else:
    encoded_message = encode(message)
    print("Encoded message: ", encoded_message)