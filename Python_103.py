def rounded_avg(n, m):
    avg = (n + m) / 2
    return round(avg)


def main():
    while True:
        n = input("Enter first number: ")
        m = input("Enter second number: ")
        try:
            n = int(n)
            m = int(m)
            if isinstance(n, int) and isinstance(m, int):
                if n != 0 and m != 0:
                    result = rounded_avg(n, m)
                    print(result)
                    choice = input(
                        "Do you want to calculate the average? (1 for yes / any key to exit) "
                    ).lower()
                    if choice == "1":
                        continue
                    else:
                        print("Exiting the program. Goodbye!")
                        break
                else:
                    print("Invalid input! Please enter integer values.")
            else:
                print("Invalid input! Please enter integers.")
        except ValueError:
            print("Invalid input! Please enter integers.")


if __name__ == "__main__":
    main()