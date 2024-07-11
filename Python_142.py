def sum_squares(lst):
    return sum(i**2 for i in lst)


def main():
    while True:
        try:
            input_str = input("Enter a list of numbers separated by spaces: ")
            while any(char not in "0123456789 " for char in input_str):
                print("Invalid input. Please enter only digits and spaces.")
                input_str = input("Enter a list of numbers separated by spaces: ")
            if input_str.strip():
                lst = [int(i) for i in input_str.split()]
                if lst:
                    break
                else:
                    print("No input received.")
                    return
            else:
                print("Invalid input. Please enter numbers separated by spaces.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    if not lst:
        print("No input received.")
    else:
        print(sum_squares(lst))


if __name__ == "__main__":
    main()