```
import random
import re

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
        elif result.lower() not in ["madam", "mom", "dad", "noon"] and re.match('^[a-zA-Z]+$', result) and len(result) > 1 and result == result[::-1]:
            print(result)
        else:
            while True:
                try:
                    if int(input("Invalid input. Try again (0 for false or 1 for true): ")) == 0:
                        word = ''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(5))
                        print(word.capitalize())
                        break
                    elif int(input("Invalid input. Try again (0 for false or 1 for true): ")) == 1:
                        word = ''.join(reversed(''.join(random.choice('abcdefghijklmnopqrstuvwxyz') for _ in range(5))))
                        print(word.capitalize())
                        break
                except ValueError:
                    pass