```
while True:
    result = input("Enter your desired output (or press enter to get a random palindrome): ")
    if not result:  
        print(make_palindrome())
        break
    elif result.lower() == "quit" or result.lower() == "q":  
        print("Goodbye!")
        break
    else:
        if result.lower() in ["mom", "dad"]:
            print(result.capitalize())
        elif len(result) > 1 and result == result[::-1]: 
            print(result)
        else:
            print("Invalid input. Try again.")