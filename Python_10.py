```
import random

def make_palindrome():
    word = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(5))
    try:
        if int(input("Enter 0 for false or 1 for true: ")) == 0:
            word += word[::-1]
        else:
            word = word + ''.join(reversed(word))
    except ValueError:
        pass
    return word.capitalize()

while True:
    try:
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
            elif result.lower() not in ["madam", "mom", "dad", "noon"] and len(result) > 1 and result == result[::-1]:
                print(result)
            else:
                print("Invalid input. Try again.")
    except ValueError:
        print("Invalid input. Please enter a valid integer or string.")