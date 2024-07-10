```
def main():
    print("Welcome to the word length calculator!")
    while True:
        try:
            lst = input("Enter words (separated by space): ").lower().replace(" ", "").split()
            if not lst:
                print("Please enter at least one word.")
                continue
            break
        except Exception as e:
            print(f"Error: {str(e)}")
            continue

    sorted_list_sum = sum(len(word) for word in lst if len(word) % 2 == 0)
    
    while True:
        try:
            input_val = input("Press Enter to calculate the sum or type 'q' to quit: ")
            if input_val.lower() == 'q':
                print("Goodbye!")
                return
            elif not input_val:
                print(sorted_list_sum)
            else:
                print("Invalid input. Please enter a number or 'q'.")
        except ValueError:
            print("Invalid input. Please enter a number or 'q'.")

if __name__ == "__main__":
    main()