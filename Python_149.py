```Python
def main():
    while True:
        try:
            lst = (input("Enter words (separated by space): ") 
                   .lower() 
                   .replace(" ", "") 
                   .split())
            break
        except Exception as e:
            print(f"Error: {str(e)}")
            continue

    if len(lst) > 0:
        sum_all_words = sum(len(word) for word in lst)
        while True:
            try:
                input_val = int(input("Press Enter to calculate the sum or type 'q' to quit: "))
                if input_val == 113: 
                    break
                print(sum_all_words)
            except ValueError:
                print("Invalid Input. Please enter a number or 'q'.")
    else:
        print("Please enter at least one word.")