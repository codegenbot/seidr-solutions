def sort_numbers():
    cont = "y"
    while cont.lower() == "y":
        print("Sort numbers? (y/n): ")
        cont = input().lower()
        if cont not in ["y", "n"]:
            print("Invalid input. Please enter y or n.")
            continue
        while True:
            while True:
                try:
                    numbers = input("Enter space-separated numbers: ")
                    nums = [int(num) for num in numbers.split()]
                    sorted_numbers = " ".join(map(str, sorted(nums)))
                    print(sorted_numbers)
                    cont = input("Sort again? (y/n): ")
                    if cont.lower() not in ["y", "n"]:
                        print("Invalid input. Please enter y or n.")
                        continue
                    break
                except ValueError as e:
                    print(
                        f"Invalid input. {e}. Please enter valid numbers separated by spaces."
                    )
            if cont.lower() != "y":
                break
        break


if __name__ == "__main__":
    sort_numbers()