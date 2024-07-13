def sort_numbers():
    while True:
        print("Do you want to sort numbers? (y/n): ")
        cont = input().lower()
        if cont != "n":
            while True:
                try:
                    numbers = input("Enter space-separated numbers: ")
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
            if cont.lower() != "y":
                break
        else:
            break


if __name__ == "__main__":
    sort_numbers()