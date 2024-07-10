def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(lst))


if __name__ == "__main__":
    main()