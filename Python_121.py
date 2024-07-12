def count_odd_numbers():
    while True:
        cont = input("Do you want to continue? (y/n): ")
        should_continue = cont.strip().lower() == "y"

        if should_continue:
            while True:
                while True:
                    try:
                        lst = [
                            int(x)
                            for x in input("Enter numbers separated by space: ").split()
                        ]
                        print(len([i for i in lst if i % 2 != 0]))
                        cont = input("Continue? (y/n): ")
                        should_continue = cont.strip().lower() == "y"
                    except ValueError as e:
                        print(
                            f"Invalid input. {str(e)}. Please enter numbers separated by space."
                        )
                break
            return
        else:
            print("Program ended.")
            return


if __name__ == "__main__":
    count_odd_numbers()