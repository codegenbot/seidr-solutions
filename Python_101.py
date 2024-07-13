```
def check(input_string):
    if "hello" in input_string.lower():
        print("Hello is present")
    else:
        print("Hello is not present")

while True:
    try:
        user_input = input("Enter a string (or 'quit' to exit): ")
        if user_input.lower() != 'quit':
            check(user_input)
            break
        else:
            print("Goodbye!")
            exit()
    except:
        print("Invalid input. Please enter a string.")