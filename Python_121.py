def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    while True:
        try:
            n = int(input("Enter the number of inputs: "))
            lst = list(
                map(int, input(f"Enter {n} numbers separated by space: ").split())
            )
            break
        except (ValueError, EOFError):
            print("Invalid input. Please enter valid integers separated by space.")

    if not lst:
        print("No valid inputs")
    else:
        print(solution(lst))


if __name__ == "__main__":
    main()