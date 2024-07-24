```
def decode_shift(): 
    while True:
        try:
            shift = int(input("Enter the shift amount: "))
            print(f"The decoded message will have a shift of {shift}.")
            input_message = input("Please enter your encoded message: ")
            return shift, input_message
        except ValueError:
            print("Invalid input. Please enter an integer.")