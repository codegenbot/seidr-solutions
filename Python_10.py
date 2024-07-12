```
import random


def make_palindrome() -> str:
    while True:
        s = "".join(random.choice("abcdefghijklmnopqrstuvwxyz") for _ in range(5))
        if s == s[::-1]:
            break
    return s


print("Enter the desired length of the palindrome (or press enter to get a random palindrome): ")
result = input()
if not result:
    print(make_palindrome())
else:
    try:
        length = int(result)
        while length < 5 or length % 2 == 1:  
            if not result:
                break
            else:
                print("Please enter an even number of at least 5.")
                print("Enter the desired length of the palindrome: ")
                result = input()
        s = "".join(random.choice("abcdefghijklmnopqrstuvwxyz") for _ in range(length))
        if s == s[::-1]:
            print(s)
        else:
            while True:
                s = "".join(random.choice("abcdefghijklmnopqrstuvwxyz") for _ in range(length))
                if s == s[::-1]:
                    break
            print(s)
    except ValueError:
        print("That's not a valid number!")