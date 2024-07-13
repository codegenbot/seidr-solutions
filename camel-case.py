```
def camel_case(s):
    return ' '.join(word.capitalize() for word in s.split('-'))


if __name__ == "__main__":
    while True:
        user_input = input("Enter a string (or 'q' to quit): ")
        if user_input.lower() == 'q':
            break
        print(camel_case(user_input))