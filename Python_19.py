def sort_numbers():
    while True:
        numbers = input("Enter space-separated numbers: ")
        try:
            nums = [int(num) for num in numbers.split()]
            sorted_numbers = " ".join(map(str, sorted(nums)))
            print(sorted_numbers)
            cont = input("Sort again? (y/n): ")
            if cont.lower() != "y":
                break
        except ValueError as e:
            print(
                f"Invalid input. {e}. Please enter valid numbers separated by spaces."
            )
        except Exception as e:
            print(f"An unexpected error occurred: {e}")


sort_numbers()