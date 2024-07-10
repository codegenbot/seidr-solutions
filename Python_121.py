def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)


def main():
    while True:
        try:
            n = int(input("Enter expected number of inputs: "))
            if n > 0:
                break
            print("Expected input should be positive.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    lst = []
    while len(lst) < n:
        inp = input(f"Enter {n} numbers separated by space: ")
        try:
            lst = list(map(int, inp.split()))
            if len(lst) != n:
                print("Incorrect number of inputs. Please try again.")
                lst = []
            else:
                break
        except ValueError:
            print("Invalid input. Please enter valid integers separated by space.")

    print(solution(lst))


if __name__ == "__main__":
    main()