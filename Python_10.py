def process_input():
    string_input, integer_input = input("Enter a string and an integer separated by space: ").split()
    try:
        return string_input.strip()[:int(integer_input)]
    except (IndexError, TypeError):
        return "Invalid input"

print(process_input())