def make_palindrome():
    pass

while True:
    result = input("Enter your desired output (or press enter to get a random palindrome): ")
    if not result:  
        print(make_palindrome())
        break
    elif result.lower() == "quit" or result.lower() == "q":  
        print("Goodbye!")
        break
    else:
        print("Invalid input. Try again.")