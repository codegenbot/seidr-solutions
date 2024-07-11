def sum_squares(lst1, lst2):
    return sum(i**2 for i in lst1) + sum(j**2 for j in lst2)


def main():
    while True:
        try:
            input_str1 = input("Enter the first list of numbers separated by spaces: ")
            while any(char not in "0123456789 " for char in input_str1):
                print("Invalid input. Please enter only digits and spaces.")
                input_str1 = input(
                    "Enter the first list of numbers separated by spaces: "
                )
            if input_str1.strip():
                lst1 = [int(i) for i in input_str1.split()]
                break
            else:
                print("Invalid input. Please enter numbers separated by spaces.")

        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

        try:
            input_str2 = input("Enter the second list of numbers separated by spaces: ")
            while any(char not in "0123456789 " for char in input_str2):
                print("Invalid input. Please enter only digits and spaces.")
                input_str2 = input(
                    "Enter the second list of numbers separated by spaces: "
                )
            if input_str2.strip():
                lst2 = [int(i) for i in input_str2.split()]
                break
            else:
                print("Invalid input. Please enter numbers separated by spaces.")

        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    if not lst1 or not lst2:
        return 0
    else:
        print(sum_squares(lst1, lst2))


if __name__ == "__main__":
    main()