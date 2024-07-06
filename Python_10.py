def make_palindrome():
    # Read input from the user
    word = input("Enter a word: ")
    
    # Reverse the input string and return it
    return "".join(reversed(word))