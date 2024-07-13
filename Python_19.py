def sort_numbers():
    while True:
        cont = "y"
        while True:
            try:
                numbers = input("Enter space-separated numbers: ")
                nums = [int(num) for num in numbers.split()]
                sorted_numbers = " ".join(map(str, sorted(nums)))
                print(sorted_numbers)
                cont = input("Sort again? (y/n): ").lower()
                if cont != "y":
                    break
            except ValueError as e:
                print(f"Invalid input. {e}. Please enter valid numbers separated by spaces.")
        if cont != "y":
            break


if __name__ == "__main__":
    sort_numbers()