def main():
    while True:
        try:
            lst = input("Enter words (separated by space): ").lower().replace(" ", "").split()
            break
        except Exception as e:
            print(f"Error: {str(e)}")
            continue

    if len(lst) > 0:
        sorted_list_sum = sum(len(word) for word in lst if len(word) % 2 == 0)
        while True:
            try:
                input_val = int(input("Press Enter to calculate the sum or type 'q' to quit: "))
                if input_val == 113:
                    break
                print(sorted_list_sum)
            except ValueError:
                print("Invalid input. Please enter a number or 'q'.")
            except Exception as e:
                print(f"Error: {str(e)}")
                continue
    else:
        print("Please enter at least one word.")