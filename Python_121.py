def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    while True:
        try:
            lst = list(map(int, input("Enter 10 numbers separated by space: ").split()))
            if len(lst) == 10:
                break
            else:
                print("Expected 10 numbers. Try again.")
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(lst))


if __name__ == "__main__":
    main()