```
import hashlib

def string_to_md5():
    while True:
        choice = input("Enter 'convert' to generate an MD5 hash or 'exit' to quit: ")
        if choice.lower() == 'convert':
            text = input("Enter a string: ")
            if not text.isalnum(): 
                print("Invalid input. Please enter only alphanumeric characters.")
            else:
                return hashlib.md5(text.encode()).hexdigest()
        elif choice.lower() == 'exit':
            break
        else:
            print("Invalid choice. Please choose 'convert' or 'exit'.")
    return None

if __name__ == "__main__":
    result = string_to_md5()
    if result:
        print(result)
    else:
        print("Program terminated.")